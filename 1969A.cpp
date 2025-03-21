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
        vector<long> v(n + 1);
        for (long p = 1; p <= n; p++)
        {
            long x;
            cin >> x;
            v[p] = x;
        }
        long mncnt(3);
        for (long p = 1; p <= n; p++)
        {
            if (!v[p])
                continue;
            long x(p), cnt(0);
            while (v[x])
            {
                ++cnt;
                long y = v[x];
                v[x] = 0;
                x = y;
            }
            mncnt = (cnt < mncnt ? cnt : mncnt);
        }
        cout<<mncnt<<endl;
    }
}