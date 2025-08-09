#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, a, b;
    cin >> n >> a >> b;
    long ans = 1 + (n + (a - 1 + b) % n) % n;
    cout << ans << endl;
    return 0;
}