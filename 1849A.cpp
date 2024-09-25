#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t(1);
    cin >> t;
    while (t--)
    {
        int n, c, h;
        cin >> n >> c >> h;
        if ((c + h) >= n - 1)
            cout << n + (n - 1) << endl;
        else
            cout << (c + h) + (c + h + 1) << endl;
    }
    return 0;
}