#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t; 
    cin>>t;
    while(t--){
        long n; 
        cin>>n;
        long res(0); 
        while(n){
            res = (res > (n % 10)) ? res : (n % 10); 
            n /= 10;
        }
        cout<<res<<endl;
    }
}