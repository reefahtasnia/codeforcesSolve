#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        long long int ans=0,sum=0,sum2=0;
        int div=0;
        cin>>n;
        int k=0;
        int a[n];
        for(int i=1; i<=n; i++){
            a[k++]=pow(2,i);
        }
        div=n/2;
        sum=a[n-1];
        for(int i=0; i<=div-2; i++) sum+=a[i];
        for(int i=div-1; i<n-1; i++) sum2+=a[i];
        ans = abs(sum - sum2);
        cout<<ans<<endl;
    }
}