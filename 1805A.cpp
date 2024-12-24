#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long cs(0);
        for (long p = 0; p < n; p++)
        {
            long x; cin >> x;
            cs = cs ^ x;
        }
        if (n % 2)
            cout << cs << endl;
        else
            cout << (cs ? -1 : 0) << "\n";
    }
}