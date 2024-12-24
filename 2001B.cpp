#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        if (n % 2)
        {
            for (long p = 1; p < n; p += 2)
                cout << p + 1 << " " << p << " ";
            cout << n << endl;
        }
        else
            cout << "-1" << endl;
    }
}