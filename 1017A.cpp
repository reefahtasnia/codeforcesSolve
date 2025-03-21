#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long x(0), rank(1);
    for (int p = 0; p < n; p++)
    {
        long a, b, c, d;
        cin >> a >> b >> c >> d;
        long s = a + b + c + d;
        if (p == 0)
            x = s;
        else if (s > x)
            ++rank;
    }
    cout << rank << endl;
    return 0;
}