#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        vector<long> a(n);
        for (long p = 0; p < n; p++)
            cin >> a[p];
        if (a[0] != n && a.back() != n)
        {
            puts("-1");
            continue;
        }
        deque<long> d;
        long left(0), right(n - 1);
        while (left <= right)
        {
            if (a[left] < a[right])
            {
                d.push_front(a[left]);
                ++left;
            }
            else
            {
                d.push_back(a[right]);
                --right;
            }
        }

        for (long p = 0; p < d.size(); p++)
            cout<< d[p] << " ";
        puts("");
    }
}