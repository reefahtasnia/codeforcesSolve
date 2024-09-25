#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, neg = 0, zero = 0;
        cin >> n;
        vector<long long> v(n);
        for (auto &x : v)
        {
            cin >> x;
            if (x < 0)
                neg++;
            if (x == 0)
                zero++;
        }
        if (neg & 1 || zero > 0)
        {
            cout << 0 << endl;
            continue;
        }
        long long index = 0;
        if (neg > 0)
            index = max_element(v.begin(), v.end()) - v.begin();
        else
            index = min_element(v.begin(), v.end()) - v.begin();
        if (v[index] < 0) v[index] = 0;
        cout << 1 << endl << index + 1 << " " << 0 << endl;
    }
    return 0;
}