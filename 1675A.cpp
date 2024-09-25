#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        long long cat=max(x-a,(long long)0);
        long long dog=max(y-b,(long long)0);
        if(cat+dog<=c){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}