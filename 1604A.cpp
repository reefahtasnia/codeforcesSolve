#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long n; cin>>n;
        long res(0);
        for(long p = 1; p <= n; p++){
            long x; cin>>x;
            long diff = x - p;
            res = (res > diff) ? res : diff;
        }
        cout<<res<<endl;
    }
}