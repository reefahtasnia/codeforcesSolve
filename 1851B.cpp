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
        vector<long long> a, u, v;
        for (int p = 0; p < n; p++)
        {
            int x;
            cin >> x;
            a.push_back(x % 2);
            if (x % 2)
                u.push_back(x);
            else
                v.push_back(x);
        }
        sort(u.begin(), u.end());
        sort(v.begin(), v.end());
        bool result = true;
        int idxa = 0, idxb = 0;
        for (int p = 0; result && p < n; p++)
        {
            if (a[p])
                a[p] = u[idxa++];
            else
                a[p] = v[idxb++];
            if (p > 0 && a[p - 1] > a[p])
                result = false;
        }

        puts(result ? "YES" : "NO");
    }
}