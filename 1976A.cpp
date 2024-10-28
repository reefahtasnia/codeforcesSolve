#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        string s;
        cin >> s;
        bool inc(true);
        for (long p = 1; inc && p < n; p++)
            if (s[p - 1] > s[p])
                inc = false;
        cout << (inc ? "YES" : "NO") << endl;
    }
}