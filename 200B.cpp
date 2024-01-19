#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double ans=0,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
    //cout<<sum/n<<endl;
}