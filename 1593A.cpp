#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int A,B,C;
        A=max(0,max(b,c)+1-a);
        B=max(0,max(a,c)+1-b);
        C=max(0,max(a,b)+1-c);
        cout<<A<<" "<<B<<" "<<C<<endl;
    }
}