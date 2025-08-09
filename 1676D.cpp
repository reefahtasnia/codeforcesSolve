#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n, m;
        cin >> n >> m;
        vector<vector<long>> f(n, vector<long>(m, 0));
        map<long, long> s, d;
        for (long row = 0; row < n; row++)
        {
            for (long col = 0; col < m; col++)
            {
                cin >> f[row][col];
                s[row + col] += f[row][col];
                d[row - col] += f[row][col];
            }
        }

        long res(0);
        for (long row = 0; row < n; row++)
        {
            for (long col = 0; col < m; col++)
            {
                long cand = s[row + col] + d[row - col] - f[row][col];
                res = (cand > res) ? cand : res;
            }
        }
        cout << res << "\n";
    }
}