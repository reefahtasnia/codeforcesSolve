#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int res=0;
    for(int i=1;i<=w;i++)
    {
        res+=(k*i);
    }
    if(res<=n) cout<<"0\n";
    else cout<<res-n<<endl;
}