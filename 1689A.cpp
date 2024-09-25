#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m, k;
        string a, b;
        cin >> n >> m >> k;
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<char> vc;
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            int temp = 0;
            while (i < n && j < m && a[i] <= b[j])
            {
                if (temp >= k)
                {
                    break;
                }
                vc.push_back(a[i]);
                i++;
                temp++;
            }
            if (temp >= k && i < n && j < m && a[i] < b[j])
            {
                vc.push_back(b[j]);
                j++;
            }
            temp = 0;
            while (j < m && i < n && b[j] <= a[i])
            {
                if (temp >= k)
                {
                    break;
                }
                vc.push_back(b[j]);
                j++;
                temp++;
            }
            if (temp >= k && j < m && i < n && b[j] < a[i])
            {
                vc.push_back(a[i]);
                i++;
            }
        }
        vector<char>::iterator itr;
        for (itr = vc.begin(); itr != vc.end(); itr++)
        {
            cout << *itr;
        }
        cout << endl;
    }
    return 0;
}