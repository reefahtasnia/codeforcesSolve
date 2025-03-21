#include <bits/stdc++.h>
using namespace std;

int main(){

    long t; 
    cin>>t;
    while(t--){
        long n; 
        cin>>n;
        long mxa(0); while(n--){long x; cin>>x; mxa = (mxa > x) ? mxa : x;}
        long m; 
        cin>>m;
        long mxb(0); while(m--){long x; cin>>x; mxb = (mxb > x) ? mxb : x;}

        if(mxa > mxb){puts("Alice\nAlice");}
        else if(mxa < mxb){puts("Bob\nBob");}
        else{puts("Alice\nBob");}
    }

}