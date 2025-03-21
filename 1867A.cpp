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
        vector<pair<long, long>> a(n);
        for (long p = 0; p < n; p++)
        {
            cin >> a[p].first;
            a[p].second = p;
        }
        sort(a.rbegin(), a.rend());
        vector<long> b(n);
        for (long p = 0; p < n; p++)
            b[a[p].second] = p + 1;
        
        for (long p = 0; p < n; p++)
            cout<<b[p]<<" ";
        puts("");
    }
}