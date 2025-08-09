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
        long cnt(1), last(1);
        while (last < n)
        {
            ++cnt;
            last = 2 * last + 2;
        }

        cout << cnt << endl;
    }
}