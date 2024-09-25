#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long x, y;
        cin >> x >> y;
        long ss = x * x + y * y;
        long z = 0;
        while (z * z < ss)
        {
            ++z;
        }
        cout << (x > 0 || y > 0) + (z * z > ss) << endl;
    }
}