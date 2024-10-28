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
        long cs=0;
        for (long p = 1; p < n; p++)
        {
            long x;
            cin >> x;
            cs += x;
        }
        cout << -cs << endl;
    }
}