#include <bits/stdc++.h>
using namespace std;

int main(){
    long t; 
    cin >> t;
    while(t--){
        long n, m; 
        cin >> n >> m;
        string s(m, 'B');
        for(long p = 0; p < n; p++){
            long x; 
            cin >> x;
            --x;
            long y = m - 1 -x ;
            long left = (x < y) ? x : y;
            if(s[left] == 'B') s[left] = 'A';
            else s[m - 1 - left] = 'A';
        }
        cout << s << endl;
    }

}