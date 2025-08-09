#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long a, b;
        cin >> a >> b;
        long res(1 + a / b);
        for (long p = b; p <= b + 100; p++)
        {
            if (p == 1)
                continue;
            long div(0), cur(a);
            while (cur)
            {
                cur /= p;
                ++div;
            }
            long cnt = (p - b) + div;
            res = (res < cnt) ? res : cnt;
        }

        cout << res << endl;
    }
}