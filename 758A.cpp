#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],max=0;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    int res=0;
    for(int i=0;i<n;i++) 
        res+=max-a[i];
    cout<<res<<endl;
}