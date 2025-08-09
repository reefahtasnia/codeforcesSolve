#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    string a, b;
    cin >> a >> b;
    n = a.length(), m = b.length();
    if (a == b)
        cout << -1 << endl;
    else
        cout << max(n, m) << endl;
}
