#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, d;
    cin >> n >> d;
    vector<long> a(n);
    for (long p = 0; p < n; p++)
        cin >> a[p];
    sort(a.rbegin(), a.rend());
    long rem(n), ans(0);
    for (long p = 0; p < n; p++)
    {
        long x = a[p];
        long num = 1 + d / x;
        if (num <= rem)
        {
            rem -= num;
            ++ans;
        }
        else
            break;
    }
    cout << ans << endl;
}