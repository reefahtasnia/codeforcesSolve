#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,mod=0,div=0,sub=0;
        cin>>a>>b;
        if(b<a) swap(a,b);
        sub=b-a;
        div=sub/10;
        mod=sub%10;
        if(mod>0) div++;
        cout<<div<<endl;
    }
    return 0;
}