#include <bits/stdc++.h>
using namespace std;
#define dbg(...)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<int> ct(4, 0);
        for (char c : s)
            if (c != '?')
                ct[c - 'A']++;
        dbg(s.size(), ct);
        int ans = 0;
        for (auto x : ct)
            ans += min(x, n);
        cout << ans << endl;
    }
}