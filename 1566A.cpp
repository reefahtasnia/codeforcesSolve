#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, s;
        cin >> n >> s;
        cout << s / (n / 2 + 1) << endl;
    }
    return 0;
}