#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    while (n--)
    {
        long cnt, s;
        cin >> cnt >> s;
        long d = (s / cnt);
        long m = (s % cnt);
        long ans = (cnt - m) * d * d + m * (d + 1) * (d + 1);
        cout << ans << endl;
    }

    return 0;
}