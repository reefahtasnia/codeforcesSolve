#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n, x, a, b; 
        cin>>n>>x>>a>>b;
        long d = b - a; 
        if(d < 0)
            d = -d;
        d += x;
        if(d > n - 1)
            d = n - 1;
        cout<<d<<endl;
    }
}