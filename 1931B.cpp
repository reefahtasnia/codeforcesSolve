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
        vector<int>a(n);
        int net=0;
        for(auto &i:a)  
        {   cin>>i;
            net+=i;
        }
        int x=net/n;
        int r=0;
        bool flag=0;
        for(int i=0; i<n; ++i)
        {
            if(r+a[i]<x)
            {
                flag=1;
                break;
            }
            r = a[i]+r-x;
        }
        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}