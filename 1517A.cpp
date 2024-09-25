#include <bits/stdc++.h>
using namespace std;
int main()
{
    const long long A = 2050;
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n % A)
        {
            puts("-1");
            continue;
        }
        long long d = n / A;
        long long res = 0;
        while (d > 0)
        {
            res += (d % 10);
            d /= 10;
        }
        cout << res << endl;
    }
}