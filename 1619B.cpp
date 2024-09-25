#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=0,b=0,c=0;
        a=sqrt(n);
        b=cbrt(n);
        c=sqrt(b);
        cout<<a+b-c<<endl;
    }
}