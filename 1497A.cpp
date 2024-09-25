#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());
        vector<int> v1;
        for (int i = 0; i < n - 1; ++i)
        {
            int j = i + 1;
            if (v[i] == v[j])
            {
                while (v[i] == v[j])
                {
                    v1.push_back(v[i + 1]);
                    ++j;
                    if (j >= n)
                        break;
                }
                cout << v[i] << " ";
                i = j - 1;
            }
            else
            {
                cout << v[i] << " ";
            }
        }
        if (v[n - 1] != v[n - 2])
        {
            cout << v[n - 1] << " ";
        }
        for (int i = 0; i < v1.size(); ++i)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
    }
    return 0;
}