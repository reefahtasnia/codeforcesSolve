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
        vector<long> a(n);
        for (long p = 0; p < n; p++)
            cin >> a[p];
        sort(a.begin(), a.end());
        long cnt(1);
        for (long p = n - 1; p >= 0; p--)
        {
            if (a[p] <= p + 1)
            {
                cnt = p + 2;
                break;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}