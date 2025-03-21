#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int res = 1 + (n + 1) * (n + 1);
        cout << res << endl;
    }
}