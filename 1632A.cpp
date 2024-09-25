#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool res = (n > 2) || (s == "00") || (s == "11");
        cout << (res ? "NO" : "YES") << endl;
    }
}