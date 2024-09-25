#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long d = 0;
        d = a ^ b;
        cout<<d<<endl;
    }
}