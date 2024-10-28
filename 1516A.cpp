#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        vector<long> a(n);
        for (long p = 0; p < n; p++)
            cin >> a[p];
        for (long p = 0; p < n && k > 0; p++)
        {
            long x = (k < a[p]) ? k : a[p];
            k -= x;
            a[p] -= x;
            a.back() += x;
        }
        for (long p = 0; p < n; p++)
            cout << a[p] << " ";
        cout << endl;
    }
}