#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        while (a > 0 || b > 0)
        {
            if (a > 0)
            {
                cout << 0;
                a--;
            }
            if (b > 0)
            {
                cout << 1;
                b--;
            }
        }
        cout << '\n';
    }
    return 0;
}