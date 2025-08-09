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

        vector<long> a(n), b(n);
        for (long p = 0; p < n; p++)
            cin >> a[p];
        for (long p = 0; p < n; p++)
            cin >> b[p];

        long left(0), right(2 * k);
        for (long p = 0; p < n; p++)
        {
            long curleft = a[p] + (b[p] < 0 ? 0 : b[p]);
            left = (left > curleft ? left : curleft);

            long curright = a[p] + (b[p] < 0 ? k : b[p]);
            right = (right < curright ? right : curright);
        }
        long ans(left <= right ? (right - left + 1) : 0);
        cout << ans << endl;
    }
}