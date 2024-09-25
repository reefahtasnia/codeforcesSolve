#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        map<long long, vector<string>> mp;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            for (char ch1 = 'a'; ch1 <= 'z'; ch1++)
            {
                for (char ch2 = 'a'; ch2 <= 'z'; ch2++)
                {
                    int curr = (ch - 'a') + (ch1 - 'a') + (ch2 - 'a') + 3;

                    string ans = "";

                    ans += ch;
                    ans += ch1;
                    ans += ch2;

                    mp[curr].push_back(ans);
                }
            }
        }

        sort(mp[n].begin(), mp[n].end());

        cout << mp[n][0] << endl;
    }
}