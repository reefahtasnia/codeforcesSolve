#include <bits/stdc++.h>
using namespace std;

int main(){
    long t; 
    cin>>t;
    while(t--){
        long n, a, b; 
        cin>>n>>a>>b;
        bool res = (a == n && b == n) || (a + b + 1 < n);
        puts(res ? "Yes" : "No");
    }
}