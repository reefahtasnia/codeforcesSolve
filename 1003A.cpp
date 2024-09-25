#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ai;
    cin >> n;
    int a[101] = {};
    for (int i = 0; i < n; ++i)
    {
        cin >> ai;
        ++a[ai];
    }
    int mx = *max_element(a, a + 101);
    cout << mx << endl;
}