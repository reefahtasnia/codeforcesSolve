#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    long difference = 1 + v[2] - v[1] - v[0];
    difference = (difference > 0) ? difference : 0;
    cout << difference << endl;
}