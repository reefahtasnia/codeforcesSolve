#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        //if(a>b) swap(a,b);
        int ans=min(max(2*a,b),max(2*b,a));
        cout<<ans*ans<<endl;
    }
    return 0;
}