#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int B = 26;
    long t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        long v[B] = {0};
        long ans(0);

        for (long p = 0; p < n; p++)
        {
            char c = s[p];
            if ('a' <= c && c <= 'z')
            {
                int idx = c - 'a';
                if (v[idx] < 0)
                    ++ans;
                ++v[idx];
            }
            else if ('A' <= c && c <= 'Z')
            {
                int idx = c - 'A';
                if (v[idx] > 0)
                    ++ans;
                --v[idx];
            }
        }

        for (long p = 0; p < B; p++)
        {
            long cur = v[p] / 2;
            cur = (cur < 0) ? -cur : cur;
            cur = (cur < k ? cur : k);
            ans += cur;
            k -= cur;
        }

        cout << ans << endl;
    }
}