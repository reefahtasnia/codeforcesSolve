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
        for (int p = 0; p < n; p++)
            cin >> a[p];
        set<int> s;
        for (int p = 0; p < n; p++)
        {
            for (int q = p + 1; q < n; q++)
                s.insert(a[q] - a[p]);
        }
        cout << s.size() << endl;
    }
}