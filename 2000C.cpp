#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    long t;
    cin >> t;
    while (t--)
    {
        long m, n;
        cin >> n;
        vector<long> a(n);
        for (long p = 0; p < n; p++)
            cin >> a[p];
        cin >> m;
        while (m--)
        {
            map<long, char> numtochar;
            map<char, long> chartonum;
            string s;
            cin >> s;
            if (s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }
            bool res(true);
            for (long p = 0; res && p < s.size(); p++)
            {
                long f(a[p]);
                char g(s[p]);
                if (numtochar.count(f) ^ chartonum.count(g))
                    res = false;
                if (!numtochar.count(f))
                {
                    numtochar[f] = g;
                    chartonum[g] = f;
                }
                else if (numtochar[f] != g || chartonum[g] != f)
                    res = false;
            }
            cout << (res ? "YES" : "NO") << endl;
        }
    }
}