#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, p, f, h, c;
        cin >> b >> p >> f >> h >> c;
        long na = (h > c) ? p : f;
        long ma = (h > c) ? h : c;

        long nb = (h < c) ? p : f;
        long mb = (h < c) ? h : c;

        long ga = (b > 2 * na) ? na : (b / 2);
        b -= 2 * ga;
        long gb = (b > 2 * nb) ? nb : (b / 2);
        long ans = ga * ma + gb * mb;

        cout<<ans<<endl;
    }
}