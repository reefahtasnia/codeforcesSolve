#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    string s;
    cin >> s;
    long pos(-1);
    for (long p = 1; p < s.size(); p++)
    {
        if (s[p] < s[p - 1])
        {
            pos = p + 1;
            break;
        }
    }
    if (pos < 0)
        cout << "NO" << endl;
    else
        cout << "YES\n"
             << (pos - 1) << " " << pos << endl;

    return 0;
}