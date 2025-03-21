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
        long count(0);
        bool ans(true);
        for (long p = 0; p < s.size(); p++)
        {
            ++count;
            if (p + 1 >= s.size() || s[p + 1] != s[p])
            {
                if (count < 2)
                {
                    ans = false;
                    break;
                }
                count = 0;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
}