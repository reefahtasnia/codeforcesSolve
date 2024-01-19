#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100001],count_pos=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1]) count_pos++;
    }
    cout<<count_pos<<"\n";
}