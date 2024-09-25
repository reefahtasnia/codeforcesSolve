#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        if (a[1] == a[n])
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            cout << a[1];
            for (int i = n; i > 1; i--)
                cout << " " << a[i];
            cout << endl;
        }
    }
}