#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long mini=min(a,b);
        long long maxi=max(a,b);
        long long int ans=0;
        while(mini<maxi)
        {
            mini+=c;
            maxi-=c;
            ans++;
        }
        cout<<ans<<endl;
    }
}