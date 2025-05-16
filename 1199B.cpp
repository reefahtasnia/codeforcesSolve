#include<bits/stdc++.h>
using namespace std;

int main()
{
    double H, L;
    cin >> H >> L;
    cout << fixed << setprecision(10) << ((L * L - H * H) / (2 * H));
    return 0;
}