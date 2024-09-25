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
        vector<int> a(n);
        int ans = 0;
        for (auto &A : a)
            cin >> A;
        reverse(a.begin(), a.end());
        set<int> st;
        for (auto &A : a)
        {
            if (st.count(A) > 0)
                break;
            st.insert(A);
            ++ans;
        }
        cout << n - ans << '\n';
    }
}