#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, s, m;
        cin >> n >> s >> m;
        long prev(0);
        bool res(false);
        for (long p = 0; p < n; p++)
        {
            long left, right;
            cin >> left >> right;
            if (prev + s <= left)
                res = true;
            prev = right;
        }
        if (prev + s <= m)
            res = true;
        puts(res ? "YES" : "NO");
    }
}