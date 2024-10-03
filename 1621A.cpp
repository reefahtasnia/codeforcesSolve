#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        if (2 * k > n + 1)
        {
            cout << -1 << endl;
            continue;
        }
        long rem(k);
        for (long p = 0; p < n; p++)
        {
            string s(n, '.');
            if (p % 2 == 0 && rem > 0)
            {
                s[p] = 'R';
                --rem;
            }
            cout << s << endl;
        }
    }
}