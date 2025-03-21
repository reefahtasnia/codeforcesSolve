#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long s(0);
        for (long p = 0; p < n; p++)
        {
            long x;
            cin >> x;
            s += x;
        }
        s %= n;
        puts(s ? "1" : "0");
    }
}