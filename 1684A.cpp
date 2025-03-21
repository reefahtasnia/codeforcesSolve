#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(s[i] - '0');
        }
        if (v.size() == 2)
        {
            if (v[0] < v[1])
            {
                cout << v[1] << endl;
            }
            else if (v[0] > v[1])
            {
                cout << v[1] << endl;
            }
            else
            {
                cout << v[0] << endl;
            }
        }
        else
        {
            sort(v.begin(), v.end());
            cout << v[0] << endl;
        }
    }
    return 0;
}