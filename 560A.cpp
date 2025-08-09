#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long ans(1);
    for (int p = 0; p < n; p++)
    {
        long note;
        cin >> note;
        if (note == 1)
        {
            ans = -1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}