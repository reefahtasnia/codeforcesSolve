#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        bool possible(false);
        for (long p = 1; !possible && p < a.size(); p++)
        {
            if (a[p] == '1' && b[p] == '1' && a[p - 1] == '0' && b[p - 1] == '0')
                possible = true;
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
}