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
        long g = (n + 3) / 4;
        for (long p = g; p < n; p++)
            cout << "9";
        for (long p = 0; p < g; p++)
            cout << "8";
        puts("");
    }
    return 0;
}