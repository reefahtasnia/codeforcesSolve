#include <bits/stdc++.h>
using namespace std;
const int N = 26;

int main()
{
    long n;
    string s;
    cin >> n >> s;
    if (s.size() > N)
    {
        puts("-1");
        return 0;
    }
    set<char> c;
    for (int p = 0; p < s.size(); p++)
        c.insert(s[p]);
    cout << s.size() - c.size() << endl;
    return 0;
}