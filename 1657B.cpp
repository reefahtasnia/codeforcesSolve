#include <bits/stdc++.h>
using namespace std;
int main(){

    long t; 
    cin>>t;
    while(t--){
        long long n, b, x, y; 
        cin>>n>>b>>x>>y;
        long long cur(0), res(0);
        for(long long p = 0; p < n; p++){
            if(cur + x <= b){cur += x;}
            else{cur -= y;}
            res += cur;
        }
        cout<<res<<endl;
    }
    return 0;
}