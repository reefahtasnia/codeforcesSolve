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
        bool fs(true), fr(true);
        for (long p = 0; p < n; p++)
        {
            long b;
            cin >> b;
            if (b != a[p])
                fs = false;
            if (b != a[n - 1 - p])
                fr = false;
        }

        puts(fs || fr ? "Bob" : "Alice");
    }
}