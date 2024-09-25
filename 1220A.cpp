#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one[n];
    int zero[n];
    memset(one,-1,sizeof(one));
    memset(zero,-1,sizeof(zero));

    
    for(int i=0; i<n; i++)
    {
        if(s[i]=='n')
        {
            one[i]=1;
        }
        if(s[i]=='z')
        {
            zero[i]=0;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(one[i]==1)
        cout<<one[i]<<" ";
    }
    for(int i=0; i<n; i++)
    {
        if(zero[i]==0)
        cout<<zero[i]<<" ";
    }
}