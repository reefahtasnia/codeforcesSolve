#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s, k;
    while (t--)
    {
        int n;
        cin >> n;
        cin >> s;
        k = s;
        sort(s.begin(), s.end());
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != k[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}