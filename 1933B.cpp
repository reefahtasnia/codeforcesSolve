#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        long long sum=0;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x % 3 == 1)
                flag = 1;
            sum += x;
        }
        if (sum % 3 == 0)
            cout << 0 << endl;
        else if (flag)
            cout << 1 << endl;
        else
            cout << 3 - sum % 3 << endl;
    }
}