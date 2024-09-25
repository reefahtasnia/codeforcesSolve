#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long res(0);
        while(n--){
            long x; 
            cin>>x;
            res |= x;
        }
        cout<<res<<endl;
    }

}