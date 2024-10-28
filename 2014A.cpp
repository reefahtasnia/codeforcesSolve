#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        long s = 0, count = 0;
        for (long p = 0; p < n; p++)
        {
            long x;
            cin >> x;
            if (x >= k) s += x;
            else if (!x && s)
            {
                --s;
                ++count;
            }
        }

        cout << count << endl;
    }
}