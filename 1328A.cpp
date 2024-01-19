#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
            continue;
        }
        int div=a/b;
        int res=(div+1)*b;
        cout<<res-a<<endl;
    }
}