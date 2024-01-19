#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        double a=n,b=m;
        long long ans = ceil((a*b)/2);
        cout<<ans<<endl;
    }
    return 0;
}