#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;

        string s;
        cin >> s;

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' and s[i + 1] == '*' and s[i + 2] == '*')
                break;
            if (s[i] == '@')
            {
                ans++;
                if (s[i + 1] == '*' and s[i + 2] == '*')
                    break;
            }
        }

        cout << ans << endl;
    }
}