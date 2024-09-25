#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cout<<m*(n*n+n+m-1)/2<<endl;
    }
    return 0;
}