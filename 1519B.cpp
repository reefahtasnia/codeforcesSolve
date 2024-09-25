#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        bool res = (n * m - 1 == k);
        cout<<(res ? "YES" : "NO");
        cout<<endl;
    }
}