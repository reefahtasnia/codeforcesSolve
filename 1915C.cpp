#include<bits/stdc++.h>
using namespace std;
bool isSquare(long long n)
{
    long long x=sqrt(n);
    return (x*x==n);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long x,sum=0;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        if(isSquare(sum))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}