#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, ans = 0, x;
    long long arr[1000];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] + arr[i] < k)
        {
            x = k - arr[i] - arr[i - 1];
            arr[i] += (k - arr[i] - arr[i - 1]);
            ans = ans + x;
        }
    }
    cout << ans << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}