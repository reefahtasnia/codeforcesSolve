#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    cin>>n;
    long long int flag=0;
    while(n!=0)
    {
        x=n%10;
        //cout<<x<<endl;
        if(x==4 || x==7)
        {
            flag+=1;
            //break;
        }
        
        n=n/10;
    }
    if(flag==4 || flag==7) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}