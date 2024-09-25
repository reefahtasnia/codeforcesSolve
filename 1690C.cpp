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
        vector<long> s(n);
        for (long p = 0; p < n; p++)
            cin >> s[p];
        vector<long> f(n);
        for (long p = 0; p < n; p++)
            cin >> f[p];
        for (long p = 0; p < n; p++)
        {
            long prev = (p > 0) ? f[p - 1] : s[0];
            long start = (prev > s[p]) ? prev : s[p];
            cout << f[p] - start << " ";
        }
        cout << endl;
    }
}