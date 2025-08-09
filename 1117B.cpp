#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (long p = 0; p < n; p++)
        cin >> a[p];
    sort(a.rbegin(), a.rend());
    ll total = (m / (k + 1)) * (k * a[0] + a[1]) + (m % (k + 1)) * a[0];
    cout << total << endl;

    return 0;
}