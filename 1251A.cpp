#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m, n, i, t, j;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        s += "#";
        vector<char> v;
        for (i = 0; i < s.size();)
        {
            if (s[i] == s[i + 1])
                i += 2;
            else
                v.push_back(s[i]), i++;
        }
        sort(v.begin(), v.end());

        set<char> st;
        for (int i = 1; i <= v.size() - 1; i++)
            st.insert(v[i]);
        for (auto it : st)
            cout << it;
        cout << endl;
    }
}