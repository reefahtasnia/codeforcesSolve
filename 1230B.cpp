#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    if (n == 1)
    {
        if (k)
            cout << "0";

        else
            cout << s;

        return 0;
    }

    if (k && s[0] != '1')
        s[0] = '1', k--;

    for (int i = 1; i < n; i++)
    {
        if (!k)
            break;

        if (s[i] != '0')
            s[i] = '0', k--;
    }
    cout << s;
    return 0;
}