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
        string s;
        cin >> s;
        long t(s[0] == '1');
        for (long p = 1; p < s.size(); p++)
        {
            if (s[p] == '0')
                cout << '+';
            else if (t > 0)
            {
                cout << '-';
                t = 0;
            }
            else if (t == 0)
            {
                cout << '+';
                t = 1;
            }
        }
        cout << endl;
    }
}