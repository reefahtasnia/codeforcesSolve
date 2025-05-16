#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, n;
    while (cin >> n)
    {
        long long a[n + 1];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        bool f = 0;
        for (i = 0; i < n - 2; i++)
        {
            if (a[i] + a[i + 1] > a[i + 2])
            {
                f = 1;
                break;
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}