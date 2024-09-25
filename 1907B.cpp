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
        string ans = "";
        int small = 0, capital = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            char c = s[i];
            if (islower(c))
            {
                if (c == 'b')
                    small++;
                else if (small)
                    small--;
                else
                    ans += c;
            }
            else
            {
                if (c == 'B')
                    capital++;
                else if (capital)
                    capital--;
                else
                    ans += c;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}