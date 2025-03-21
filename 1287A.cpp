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
        string s;
        cin >> s;
        long last(-1), ans(0);
        for (long p = 0; p < s.size(); p++)
        {
            if (s[p] == 'A')
                last = p;
            else if (s[p] == 'P')
            {
                if (last < 0)
                    continue;
                long dist = p - last;
                ans = (ans > dist) ? ans : dist;
            }
        }
        cout << ans << endl;
    }
    return 0;
}