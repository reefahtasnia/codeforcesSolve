#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
            cin >> s[i];
        string name = "vika";
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[j][i] == name[count])
                {
                    count++;
                    break;
                }
            }
        }
        if (count >= 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}