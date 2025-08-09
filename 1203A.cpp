#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k;
    int n, m, q;

    cin >> q;
    while (q--)
    {
        cin >> n;

        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                k = i;
        }

        bool f1 = true;

        m = 2;
        for (i = k + 1; i < n; i++)
        {
            if (a[i] != m)
            {
                f1 = false;
                break;
            }

            m++;
        }

        m = n;
        for (i = k - 1; i >= 0; i--)
        {
            if (a[i] != m)
            {
                f1 = false;
                break;
            }

            m--;
        }

        bool f2 = true;

        m = n;
        for (i = k + 1; i < n; i++)
        {
            if (a[i] != m)
            {
                f2 = false;
                break;
            }

            m--;
        }

        m = 2;
        for (i = k - 1; i >= 0; i--)
        {
            if (a[i] != m)
            {
                f2 = false;
                break;
            }

            m++;
        }

        if (f1 || f2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}