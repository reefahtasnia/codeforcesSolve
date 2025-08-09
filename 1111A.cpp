#include <bits/stdc++.h>
using namespace std;

int main(){
    const string vw = "aeiou";
    string s, t; 
    cin >> s >> t;
    if(s.size() != t.size()) {cout << "No" << endl; return 0;}
    string ans = "Yes";
    for(long p = 0; p < s.size(); p++){
        bool fs = (vw.find(s[p]) == string::npos);
        bool ft = (vw.find(t[p]) == string::npos);
        if(fs ^ ft){ans = "No"; break;}
    }

    cout << ans << endl;
    return 0;
}