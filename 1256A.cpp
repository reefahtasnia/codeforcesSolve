#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,n,s;

    cin >> t;
    while (t--)
    {
        cin >> a >> b >> n >> s;

        int q = s / n;
        s -= (min(a, q) * n);

        if (s <= b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}