#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    long count;
    for (long p = 0; p < s.size(); p++)
    {
        count += (s[p] == 'a');
    }
    long ans(2 * count - 1);
    ans = (s.size() < ans) ? s.size() : ans;
    cout << ans << endl;
}