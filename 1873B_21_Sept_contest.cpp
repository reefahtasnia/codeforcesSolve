#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mini=99999,index;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<mini)
            {
                mini=a[i];
                index=i;
            }
        }
        int res=1;
        for(int i=0;i<n;i++)
        {
            if(i!=index) res*=a[i];
            else 
            {
                res*=(mini+1);
            }
        }
        cout<<res<<endl;
    }
}