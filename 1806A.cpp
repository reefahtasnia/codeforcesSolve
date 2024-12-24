#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d, ans = 0;
        cin >> a >> b >> c >> d;
        if (a == c && b == d)
        {
            cout << 0 << endl;
            continue;
        }
        if (d < b)
        {
            cout << -1 << endl;
            continue;
        }
        while (b != d)
        {
            b++;
            a++;
            ans++;
        }
        if (a < c)
        {
            cout << -1 << endl;
            continue;
        }
        while (a != c)
        {
            a--;
            ans++;
        }
        cout << ans << endl;
    }
}