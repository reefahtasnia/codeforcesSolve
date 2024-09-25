#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() >= 3)
        {
            if ((s[0] == 'Y' || s[0] == 'y') and (s[1] == 'E' || s[1] == 'e') and (s[2] == 'S' || s[2] == 's'))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}