#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int x = 2 * ((2 * n) - 2);
        if (k <= x)
        {
            if (k & 1)
                k++;
            cout << k / 2 << endl;
        }
        else
            cout << x / 2 + (k - x) << endl;
    }
}