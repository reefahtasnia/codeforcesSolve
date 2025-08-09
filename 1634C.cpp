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
        if ((n % 2) && (k > 1))
        {
            puts("NO");
            continue;
        }
        puts("YES");
        for (long u = 1; u <= n; u++)
        {
            for (long p = 0; p < k; p++)
                cout << u + n * p << " ";
            puts("");
        }
    }
}