#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,res,sum=0,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        //res=sum;
        sum=(sum-a)+b;
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
}