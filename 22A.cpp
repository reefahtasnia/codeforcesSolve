#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool flag = 0;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            cout << a[i];
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "NO";
}