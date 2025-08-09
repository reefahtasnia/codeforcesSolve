#include <bits/stdc++.h>
using namespace std;

int main()
{

    long t;
    cin >> t;
    while (t--)
    {
        long l, r;
        cin >> l >> r;
        long L, R;
        cin >> L >> R;
        long mxl = (l > L ? l : L);
        long mnr = (r < R ? r : R);
        long len = (mnr - mxl);
        long res = len + (l != L) + (r != R);
        res = (len >= 0 ? res : 1);
        cout << res << endl;
    }
}