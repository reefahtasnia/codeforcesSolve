#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long mini=INT_MAX;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            mini=min(mini,a[i]);
        }
        long long ans=0;
        for(int i=0;i<n;i++) ans=ans+(a[i]-mini);
        cout<<ans<<"\n";
    }
}