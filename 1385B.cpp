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
        int a[n];
        map<int,bool>mp;
        int x,j=0;
        for(int i=0;i<2*n;i++) 
        {
            cin>>x;
            if(!mp[x])
            {
                a[j]=x;
                mp[x]=true;
                j++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}