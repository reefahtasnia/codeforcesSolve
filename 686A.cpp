#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,f=0;
    cin>>n>>x;
    while(n--)
    {
        char c;
        long long d;
        cin>>c>>d;
        if(c=='+')
            x+=d;
        else
        {
            if(x>=d)
                x-=d;
            else{
                //x--;
                f++;
            }
        }
        //cout<<f<<" "<<endl;
    }
    cout<<x<<" "<<f<<endl;
}