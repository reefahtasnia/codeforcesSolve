#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int costSingle = n * a;
        int costDouble = 0;

        if (n % 2 == 0) costDouble = n / 2 * b;
        else  costDouble = min(n / 2 * b + a, n * a);
        cout << min(costSingle, costDouble) << endl;
    }
    return 0;
}
