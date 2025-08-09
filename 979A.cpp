#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n; cin >> n;
    ++n;
    long long int res = ((n > 1) && (n & 1)) ? n : (n / 2);
    cout << res << endl;

    return 0;
}