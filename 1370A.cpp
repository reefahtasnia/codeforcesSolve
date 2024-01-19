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
        /*int gcd=0;
        for(int i=1;i<=n;i++)
        {
            if(__gcd(i,n)==1)
            {
                gcd++;
                break;
            }
        }
        cout<<gcd<<endl;*/
        cout<<n/2<<endl;
    }
}