#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        printf("%lld %lld\n", (a < c ? 1LL : -1LL), (c < b * a ? b : -1LL));
    }
    return 0;
}