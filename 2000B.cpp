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
        long x;
        cin >> x;
        long left(x - 1), right(x + 1);
        bool rule(true);
        for (long p = 1; p < n; p++)
        {
            cin >> x;
            if (x == left)
                --left;
            else if (x == right)
                ++right;
            else
                rule = false;
        }
        puts(rule ? "YES" : "NO");
    }
}