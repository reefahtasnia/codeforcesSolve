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
        if(n==1 && m==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(m>n) swap(m,n);
        int ans = 2*(m-1) + n;
        cout<<ans<<endl;
    }
}