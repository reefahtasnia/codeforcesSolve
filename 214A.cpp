#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n;
    cin>>n>>m;
    long long ans=0;
    for(int i=0;i*i<=n and i<=m;i++)
    {
        int j=n-i*i;
        if(i+j*j==m)
        {
            ans++;
        }
    }
    cout << ans<< endl;
    return 0;
}