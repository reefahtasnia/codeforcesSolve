#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,diff=0,ans=0;
        cin>>a>>b;
        if(a == b){
            cout<<0<<"\n";
            continue;
        }
        if(a>b){
            diff=a - b;
            ans++;
            if(diff % 2 !=0){
                ans++;
            }
        }
        else if(a < b){
            diff= b - a;
            ans++;
            if(diff % 2 != 1){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
}