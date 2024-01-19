#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        string s;
        cin >> n;
        cin >> s;
        char s2[n], element = s[0];
        int k = 0;
        c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != element)
            {
                s2[k] = element;
                element = s[i];
                k++;
            }
            for (int j = 0; j < k; j++)
            {
                if (s2[j] == s[i])
                {
                    cout << "NO" << endl;
                    c = 1;
                    break;
                }
            }
            if (c == 1)
            {
                break;
            }
        }
        if (c == 0)
        {
            cout << "YES" << endl;
        }
    }
}
