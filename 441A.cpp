#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, v, m, count = 0;
    vector<long long> seller;

    cin >> n >> v;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        long long a[m];
        for (int j = 0; j < m; j++)
            cin >> a[j];

        sort(a, a + m);

        if (a[0] < v)
        {
            count++;
            seller.push_back(i + 1);
        }
    }

    cout << count << endl;
    for (int i = 0; i < seller.size(); i++)
        cout << seller[i] << " ";

    return 0;
}