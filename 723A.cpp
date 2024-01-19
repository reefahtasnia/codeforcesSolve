#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maxi,mini,res;
    int maxi0=max(a,b);
    maxi=max(maxi0,c);
    mini=min(a,b);
    int mini2=min(mini,c);
    res=maxi-mini2;
    cout<<res<<endl;
}