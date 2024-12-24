#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long dist = b - a;
        long long left(1), right(dist + 7), res(1);
        while (left <= right)
        {
            long long mid = (left + right) / 2;
            long long tst = mid * (mid - 1) / 2;
            if (tst <= dist)
            {
                res = mid;
                left = mid + 1;
            }
            else right = mid - 1;
        }

        cout << res << endl;
    }
}