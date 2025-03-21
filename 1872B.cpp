#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = INT_MAX;
        while (n--)
        {
            int d, s;
            cin >> d >> s;
            int res = d + (s - 1) / 2;
            ans = min(ans, res);
        }
        cout << ans << endl;
    }
}