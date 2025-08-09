#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        if (x < y)
        {
            if (x == 1)
                cout << "NO\n";
            else
            {
                while (x < y && x != 3)
                {
                    if (x % 2)
                        x--;
                    x /= 2;
                    x *= 3;
                }

                if (x >= y)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
        else
            cout << "YES\n";
    }
    return 0;
}