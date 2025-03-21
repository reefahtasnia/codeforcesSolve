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
        long x;
        cin >> x;
        long y(x);
        for (long p = 1; p < n; p++)
            cin >> y;
        puts(y <= x + n + 1 ? "YES" : "NO");
    }
}