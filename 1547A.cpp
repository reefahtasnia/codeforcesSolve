#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2, xf, yf;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> xf >> yf;
        int dx = x1 - x2;
        if (dx < 0) dx = -dx;
        int dy = y1 - y2;
        if (dy < 0) dy = -dy;
        int ans = dx + dy;
        if (y1 == y2 && y1 == yf && ((x1 < xf && xf < x2) || (x2 < xf && xf < x1)))
            ans += 2;
        else if (x1 == x2 && x1 == xf && ((y1 < yf && yf < y2) || (y2 < yf && yf < y1)))
            ans += 2;
        cout << ans << endl;
    }
}