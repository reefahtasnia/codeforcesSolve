#include <bits/stdc++.h>
using namespace std;

int main(){
    long t; 
    cin >> t;
    while(t--){
        string s; 
        cin >> s;
        long cnt(0);
        for(long p = 0; p < s.size(); p++){cnt += s[p] == 'N';}
        cout << (cnt != 1 ? "YES" : "NO") << endl;
    }
    return 0;
}