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
        long rem(0);
        for (long p = 0; p < s.size(); p++)
        {
            rem += (s[p] == 'Q') - (s[p] == 'A');
            rem = (rem > 0) ? rem : 0;
        }

        cout << (rem <= 0 ? "Yes" : "No") << endl;
    }
}