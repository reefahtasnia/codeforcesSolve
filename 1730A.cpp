#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        unordered_map<int, int> m;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        int ans = 0;
        for (auto x : m)
        {
            if (x.second >= c)
                ans += c;
            else
                ans += x.second;
        }
        cout << ans << endl;
    }
    return 0;
}