#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, ans=0;
    cin >> n;
    while (n > 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
        {
            n = n - 1;
            ans++;
        }
    }
    cout << ans + 1 << endl;
    return 0;
}