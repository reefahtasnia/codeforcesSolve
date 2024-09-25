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
        for(int i=0;i<n;i++)
            cin>>a[i];  
        sort(a,a+n);
        int last=a[n-1];
        int first=a[0];
        cout<<last-first<<endl;
    }
}