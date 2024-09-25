#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll xa, xb, xc, ya, yb, yc;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;

        ll ab = abs(xa - xb) + abs(ya - yb);
        ll ac = abs(xa - xc) + abs(ya - yc);
        ll bc = abs(xc - xb) + abs(yc - yb);
        if (bc == ab + bc)
        {
            cout << 1 << endl;
            continue;
        }

        ll ans = (ab + ac - bc) / 2;
        cout << ++ans << endl;
    }
}