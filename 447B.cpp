#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, add;
    string s;
    while (cin >> s)
    {
        cin >> add;
        long long max_val = 0, sum = 0, v[200], x;
        for (i = 0; i < 26; i++)
        {
            cin >> x;
            v[i + 'a'] = x;
            max_val = max(max_val, x);
        }
        n = 1;
        for (i = 0; i < s.size() + add; i++)
        {
            if (i < s.size())
                sum += n * v[s[i]];
            else
                sum += n * max_val;
            n++;
        }
        cout << sum << endl;
    }
    return 0;
}