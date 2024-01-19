#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ind;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (a[0] != a[1] && a[0] != a[2])
        {
            ind = 1;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (a[i] != a[0])
                {
                    ind = i+1;
                    break;
                }
            }
        }
        cout << ind << endl;
    }
    return 0;
}