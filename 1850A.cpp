#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int flag=0;
        if(a+b>=10 || b+c>=10 || c+a>=10)
            flag=1;
        else
            flag=0;
        if(flag==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}