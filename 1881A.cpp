#include <bits/stdc++.h>
using namespace std;
int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        int ans = 0;
        if (isSubstring(s2, s1) != -1)
        {
            cout << ans << endl;
            continue;
        }
        bool flag = false;
        do
        {
            ans++;
            s1 += s1;
            if (isSubstring(s2, s1) != -1)
            {
                flag = true;
                break;
            }
        } while ((s1.size() <= s2.size() + m));
        if (flag)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}