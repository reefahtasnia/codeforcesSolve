#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k;
    int n, m;
    cin >> n;

    int a[n];
    for(i = 0; i < n; i++)
        cin >> a[i];

    long long ans = a[n - 1];
    int mx = a[n - 1];

    for(i = n - 2; i >= 0; i--)
    {
        if(a[i] < mx)
            ans += a[i], mx = a[i];
        else
            ans += min(max(0, mx - 1), a[i]), mx = min(max(0, mx - 1), a[i]);
    }

    cout<<ans<<endl;
    return 0;
}