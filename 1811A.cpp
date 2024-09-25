#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        int ind = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] < d + '0')
            {
                ind = i;
                break;
            }
        }
        if (ind == -1)
            cout << s << d << endl;
        else
        {
            s.insert(ind, to_string(d));
            cout << s << endl;
        }
    }
}