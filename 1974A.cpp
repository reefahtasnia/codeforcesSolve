#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int ans = y / 2 + (y % 2 == 0 ? 0 : 1);
        int xn = 15 * ans;
        xn -= 4 * y;
        int v = 0;
        if (x > xn)
            v = (x - xn) / 15 + ((x - xn) % 15 == 0 ? 0 : 1);
        ans += v;
        cout << ans << endl;
    }
}