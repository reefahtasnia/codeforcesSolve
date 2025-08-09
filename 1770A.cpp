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
        long left(1), right(n);
        for (long p = 1; p <= n; p++)
        {
            if (p % 2)
            {
                cout << right << " ";
                --right;
            }
            else
            {
                cout << left << " ";
                ++left;
            }
        }
        puts("");
    }
}