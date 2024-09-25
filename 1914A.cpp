#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i] - 'A']++;
        }
        for (auto i : mp)
        {
            if (i.second > i.first)
                count++;
        }
        cout << count << endl;
    }
}