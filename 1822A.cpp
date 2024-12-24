#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n, s;
        cin >> n >> s;
        vector<long> a(n);
        for (long p = 0; p < n; p++)
            cin >> a[p];
        vector<long> b(n);
        for (long p = 0; p < n; p++)
            cin >> b[p];
        long idx(-1), mxb(0);
        for (long p = 0; p < n; p++)
        {
            if (s < a[p] + p)
                continue;
            if (b[p] > mxb)
            {
                idx = p + 1;
                mxb = b[p];
            }
        }
        cout << idx << endl;
    }
}