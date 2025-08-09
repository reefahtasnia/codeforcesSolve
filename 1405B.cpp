#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll avail(0), cnt(0);
        for (ll p = 0; p < n; p++)
        {
            ll x;
            cin >> x;
            if (x > 0)
                avail += x;
            else if (x < 0)
            {
                if (x + avail > 0)
                    avail += x;
                else
                {
                    x += avail;
                    cnt -= x;
                    avail = 0;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}