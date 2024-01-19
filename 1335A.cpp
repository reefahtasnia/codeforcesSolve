#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int res=0;
        double n;
        cin>>n;
        res=ceil((n/2)-1);
        cout<<res<<endl;
    }
}