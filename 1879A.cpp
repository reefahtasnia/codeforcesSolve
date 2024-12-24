#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long w, rep;
        cin >> w >> rep;
        bool possible(true);
        for (long p = 1; p < n; p++)
        {
            long s, e;
            cin >> s >> e;
            if (s < w)
                continue;
            else if (e >= rep)
                possible = false;
        }

        if (possible)
            cout << w << endl;
        else
            puts("-1");
    }
}