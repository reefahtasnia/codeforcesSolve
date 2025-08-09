#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        string s;
        cin >> s;
        long mx(n);
        for (long p = 0; p < n; p++)
        {
            if (s[p] == '0')
                continue;
            long cur = 2 * ((2 * p < n) ? (n - p) : (p + 1));
            mx = (mx > cur) ? mx : cur;
        }
        cout << mx << endl;
    }
    return 0;
}