#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long x=1;
        while(2*x<=n)
        {
            x*=2;
        }
        x--;
        cout<<x<<endl;  
    }
    return 0;
}