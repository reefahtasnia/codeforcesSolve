#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x, t, m, k;
    cin >> k;
    while (k--)
    {
        cin >> n >> x >> t;
        m = min(t / x, n); //maximum number of participants that can start before the first participant finishes
        // m*(2*n-1-m)/2 is the total dissatisfaction calculated by the sum of arithmetic series n*(n-1)/2
        cout << (m * (2 * n - 1 - m)) / 2 << endl;
    }
}