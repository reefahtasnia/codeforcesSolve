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
        long cur;
        cin >> cur;
        bool down(true), res(true);
        for (long p = 1; p < n; p++)
        {
            long x;
            cin >> x;
            if (cur > x)
            {
                if (!down)
                    res = false;
            }
            else if (cur < x)
                down = false;
            cur = x;
        }

        puts(res ? "YES" : "NO");
    }
}