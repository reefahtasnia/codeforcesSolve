#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<long, long> msqrt;
    for (long p = 1; p <= 1000; p++)
        msqrt[p * p] = p;
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        string s;
        cin >> s;

        if (!msqrt.count(s.size()))
        {
            puts("No");
            continue;
        }

        long sz = msqrt[s.size()];
        bool possible(true);
        for (long row = 0; possible && row < sz; row++)
        {
            for (long col = 0; possible && col < sz; col++)
            {
                bool digit = (s[row * sz + col] == '1');
                bool edge = (row == 0 || row == sz - 1 || col == 0 || col == sz - 1);
                if (edge ^ digit)
                {
                    possible = false;
                }
            }
        }
        puts(possible ? "Yes" : "No");
    }
}