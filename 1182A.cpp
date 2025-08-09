#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long ans = (n % 2) ? 0 : (1 << (n / 2));
    cout << ans << endl;
    return 0;
}