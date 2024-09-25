#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,s;
        cin>>a>>b;
        if(a==0) s=1;
        else if(b==0) s=a+1;
        else s=(b*2)+a+1;
        cout<<s<<endl;
    }
}