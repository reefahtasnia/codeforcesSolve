#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int i, j, k;
    int n, m, t;
    int x, y;
    string s, pat;

    char c[] = {'a', 'b', 'c'};

    cin >> t;
    while(t--)
    {
        cin >> s;
        n = s.length();

        for(i = 0; i < n; i++)
        {
            if(s[i] != '?') continue;

            for(j = 0; j < 3; j++)
            {
                s[i] = c[j];

                m = 1;
                // check if good;
                if(i - 1 >= 0 && s[i] == s[i - 1])
                    m = 0;
                else if(i + 1 < n && s[i] == s[i + 1])
                    m = 0;

                if(m) break;
                s[i] = '?';
            }
        }

        bool f = true;
        for(i = 1; i < n; i++)
        {
            if(s[i] == '?' || s[i] == s[i - 1])
                f = false;
        }

        if(f)
            cout << s << endl;
        else
            cout << -1 << endl;
    }


    return 0;
}