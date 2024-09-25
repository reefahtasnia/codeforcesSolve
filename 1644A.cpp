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
        bool flag = true;
        long long len = s.size();
        for (int i = 0; i < len; i++)
        {
            if (isupper(s[i]))
            {
                for (int j = 0; j <= i; j++)
                {
                    if (j == i)
                    {
                        flag = false;
                        break;
                    }
                    if (s[j] - 32 == s[i])
                    {
                        s[j] = 0;
                        s[i] = 0;
                        break;
                    }
                }
            }
            if (!flag)
                break;
        }
        if (flag)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}