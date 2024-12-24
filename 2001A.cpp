#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        vector<long> f(n + 1, 0);
        for (long p = 0; p < n; p++)
        {
            long x;
            cin >> x;
            ++f[x];
        }
        long mxf(0);
        for (long p = 0; p < f.size(); p++)
            mxf = (mxf > f[p] ? mxf : f[p]);
        cout << n - mxf << endl;
    }
}