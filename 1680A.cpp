#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long la, ra, lb, rb;
        cin >> la >> ra >> lb >> rb;
        long mn = (la > lb) ? la : lb;
        long res = (mn <= ra && mn <= rb) ? mn : (la + lb);
        cout << res << endl;
    }
}
