#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, k, x, y, x2, y2;
    cin >> r >> x >> y >> x2 >> y2;

    double d = sqrt(pow(x - x2, 2) + pow(y - y2, 2));
    double a = d / (2 * r);
    k = ceil(a);

    cout << k << endl;

    return 0;
}