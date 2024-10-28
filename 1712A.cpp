#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ai;
        cin >> n >> k;
        int op = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> ai;
            if (i >= k)
            {
                if (ai <= k)
                    ++op;
            }
        }
        cout << op << endl;
    }
    return 0;
}