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
        if (b == 1)
        {
            puts("NO");
            continue;
        }
        cout << "YES\n";
        cout << a << " " << a * b << " " << a * (b + 1) << "\n";
    }
}