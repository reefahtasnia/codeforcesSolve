#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool missing(true);
        string res;
        cin >> res;
        for (long p = 1; p < n - 2; p++)
        {
            string x;
            cin >> x;
            if (res.back() == x[0])
                res = res + x[1];
            else{
                missing = false;
                res = res + x;
            }
        }

        if (missing)
            res += 'a';
        cout << res << endl;
    }
}
