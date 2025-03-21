#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (long p = 0; p < s.size(); p++)
        {
            if (s[p] == '1')
            {
                cout << 17 << endl;
                break;
            }
            if (s[p] == '7')
            {
                cout << 71 << endl;
                break;
            }
        }
    }
}