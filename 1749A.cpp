#include <bits/stdc++.h>
using namespace std;

int main(){
    long t; 
    cin>>t;
    while(t--){
        long n, m; 
        cin>>n>>m;
        long x, y; for(long p = 0; p < m; p++) cin>>x>>y;
        puts(m < n ? "YES" : "NO");
    }
}