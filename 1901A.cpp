#include <bits/stdc++.h>
using namespace std;
struct
{
    const int i = INT_MAX;
    const long long int l = LLONG_MAX;
} inf;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            a.push_back(y);
        }
        int mn = -inf.i;
        for (int i = 1; i < n; ++i)
            mn = max(mn, a[i] - a[i - 1]);
        cout << max({a[0], 2 * (x - a[n - 1]), mn}) << endl;
    }
}