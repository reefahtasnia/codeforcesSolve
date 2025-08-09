#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    bool possible = true;
    if (bx < ax && ax < cx)
        possible = false;
    if (cx < ax && ax < bx)
        possible = false;

    if (by < ay && ay < cy)
        possible = false;
    if (cy < ay && ay < by)
        possible = false;

    cout << (possible ? "YES" : "NO") << endl;

    return 0;
}