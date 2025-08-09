#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, a[200001];
    cin >> n;
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    long long k = 1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (k <= a[i])
        {
            ans++;
            k++;
        }
    }
    cout << ans << endl;

    return 0;
}
