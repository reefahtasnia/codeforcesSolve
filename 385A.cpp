#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, c, x;
    cin >> n >> c;
    long long a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long mx = 0;

    for (int i = 0; i < n - 1; i++)
    {
        x = a[i] - (a[i + 1] + c);
        if (x > mx)
            mx = x;
    }

    cout << mx << endl;

    return 0;
}