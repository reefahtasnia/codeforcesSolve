#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        set<int> a, b, ans;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b.insert(x);
        }
        int count1 = 0, count2 = 0;
        for (auto x : a)
        {
            if (x <= k)
            {
                count1++;
                ans.insert(x);
            }
        }
        for (auto x : b)
        {
            if (x <= k)
            {
                count2++;
                ans.insert(x);
            }
        }
        if (ans.size()== k && count1 >= k / 2 && count2 >= k / 2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}