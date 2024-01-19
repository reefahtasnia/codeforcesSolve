#include<bits/stdc++.h>
using namespace std;
int freq[101];
int main()
{
    int n,m,p,q,flag=0;
    cin>>n>>p;
    int x[p];
    int merge[n]={0};
    for(int i=1;i<=p;i++) 
    {
        cin>>x[i];
        m=x[i];
        merge[m]=1;
    }
    cin>>q;
    int y[q];
    for(int i=1;i<=q;i++) 
    {
        cin>>y[i];
        m=y[i];
        merge[m]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(merge[i]==1)
            flag=1;
        else{
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";
}