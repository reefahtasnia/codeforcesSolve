#include <bits/stdc++.h>
using namespace std;

int main()
{

    long t;
    cin >> t;
    while (t--)
    {
        long n, x;
        cin >> n >> x;
        long cnt(0), low(0), high(2e9 + 7);
        for (long p = 0; p < n; p++)
        {
            long cur;
            cin >> cur;
            long left = cur - x;
            long right = cur + x;
            low = (low > left) ? low : left;
            high = (high < right) ? high : right;
            if (low > high)
            {
                ++cnt;
                low = left;
                high = right;
            }
        }
        cout << cnt << endl;
    }
}