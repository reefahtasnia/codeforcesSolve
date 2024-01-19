#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maxindex=0;
    int minindex=0;
    int maxi=0;
    int mini=1000;
    int n,res;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>maxi){
            maxi=a[i];
            maxindex=i;
        }
        
        if(a[i]<=mini)
        {
            mini=a[i];
            minindex=i;
        }
    }
    if(maxindex>minindex)
    {
        res=(maxindex-1)+(n-minindex)-1;
    }
    else
    {
        res=(maxindex-1)+(n-minindex);
    }
    cout<<res<<endl;
    return 0;
}