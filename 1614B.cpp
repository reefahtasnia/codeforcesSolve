#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v(n);
        for (ll p = 0; p < n; p++)
        {
            cin >> v[p].first;
            v[p].second = p + 1;
        }
        sort(v.rbegin(), v.rend());
        ll total(0);
        vector<ll> res(n + 1, 0);
        for (ll p = 0; p < n; p++)
        {
            ll num = v[p].first;
            ll idx = v[p].second;
            ll dist = p / 2 + 1;
            total += 2 * num * dist;
            ll pos = p % 2 ? dist : -dist;
            res[idx] = pos;
        }

        cout << total << endl;
        for (ll p = 0; p <= n; p++)
            cout << res[p] << " ";
        puts("");
    }
}