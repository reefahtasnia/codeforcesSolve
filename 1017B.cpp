#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; 
    cin >> n;
    string a, b; 
    cin >> a >> b;
    long long zz(0), zn(0), nz(0), nn(0);
    for (long long p = 0; p < n; p++){
        zz += (a[p] == '0' && b[p] == '0');
        zn += (a[p] == '0' && b[p] == '1');
        nz += (a[p] == '1' && b[p] == '0');
        nn += (a[p] == '1' && b[p] == '1');
    }

    long long res = zz * nn + nz * zn + zz * nz;
    cout << res << endl;

    return 0;
}