#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        bool ans=false;
        for(int i=0;i<n;i++) cin>>a[i];
        if(n>2){
            for(int i=2;i<n;i++){
                if(i%2==0){
                    if(a[0]%2!=a[i]%2){
                        ans=true;
                        break;
                    }
                }
                else{
                    if(a[1]%2!=a[i]%2){
                        ans=true;
                        break;
                    }
                }
            }
        }
        if(ans) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}