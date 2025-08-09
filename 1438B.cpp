#include <bits/stdc++.h>
using namespace std;

int main()
{

    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        set<long> s;
        bool ans(false);
        for (long p = 0; p < n; p++)
        {
            long b;
            cin >> b;
            if (s.count(b))
                ans = true;
            s.insert(b);
        }

        puts(ans ? "YES" : "NO");
    }

    return 0;
}