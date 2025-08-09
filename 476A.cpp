#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int res = 0 , p;
    if (n % 2 != 0)
    {
        p = n / 2;
        p++;
    }
    else
        p = n / 2;
    
    for (int i = p; i <= n; i++)
    {
        if (i % m == 0)
        {
            res = i;
            break;
        }
    }
    if (res > 0)
        cout << res << endl;
    else
        cout << "-1" << endl;
    return 0;
}