#include <bits/stdc++.h>
using namespace std;

int main(){
    long t;
    cin >> t;
    while (t--)    {
        long n;
        cin >> n;
        vector<long> v(n);
        for (long p = 0; p < n; p++){
            string s;
            cin >> s;
            for (long u = 0; u < 4; u++){
                if (s[u] == '#'){
                    v[p] = u + 1;
                    break;
                }
            }
        }
        for (long p = n - 1; p >= 0; p--) cout << v[p] << " ";
        cout << endl;
    }
}