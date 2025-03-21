#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long ans, a, b, c;
    cin >> a >> b >> c;
    ans = a + b + c;
    ans = max(ans, (a * b * c));
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * (b + c));
    ans = max(ans, a + (b * c));
    ans = max(ans, (a * b) + c);
    cout << ans << endl;
    return 0;
}