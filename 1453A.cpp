#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, m, a[101], b[101];
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        int c = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (a[i] == b[j])
                    c++;

        cout << c << endl;
    }
}