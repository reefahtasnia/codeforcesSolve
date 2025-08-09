#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        long v(0), z(0), t(0);
        for (long p = 0; p < s.size(); p++)
        {
            long d = (s[p] - '0');
            t += d;
            if ((!d) && (!z))
                z = 1;
            else if (d % 2 == 0)
                v = 1;
        }

        bool ans = (z && v && (t % 3 == 0)) || (s == "0");
        cout << (ans ? "red" : "cyan") << endl;
    }

    return 0;
}