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
        if((n/2)%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=n/2;i<n;i++)
            {
                a[i]=2*(i-n/2+1);
                cout<<a[i]<<" ";
            }
            for(int i=0;i<n/2-1;i++)
            {
                a[i]=2*i+1;
                cout<<a[i]<<" ";
            }
            a[n-1]=n/2*3-1;
            cout<<a[n-1]<<endl;
        }
    }
}