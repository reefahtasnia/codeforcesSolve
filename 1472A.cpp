#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n;
        cin>>w>>h>>n;
        int count=1;
        while(w%2==0)
        {
            w/=2;
            count*=2;
        }
        while(h%2==0)
        {
            h/=2;
            count*=2;
        }
        if(count>=n) cout<<"YES\n";
        else cout<<"NO\n";
    }
}