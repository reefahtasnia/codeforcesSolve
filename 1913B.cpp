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
        int n = s.length();
        int coin = 0;
        int count0 = 0, count1 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0')
                ++count0;
            else
                ++count1;
        }
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1' && count0 > 0)
            {
                --count0;
            }
            else if (s[i] == '0' && count1 > 0)
            {
                --count1;
            }
            else
            {
                coin = n - i;
                break;
            }
        }
        cout << coin << endl;
    }
}