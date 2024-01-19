#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        int time=24*60;
        int ans=time-(h*60+m);
        cout<<ans<<endl;
    }
}