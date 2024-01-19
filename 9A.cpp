#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y,w;
    cin>>y>>w;
    int x = max(y,w);
    int z = 6-x+1;
    if(z==6)
    {
        cout<<"1/1";
    }
    else if(z==5)
    {
        cout<<"5/6";
    }
    else if(z==4)
    {
        cout<<"2/3";
    }
    else if(z==3)
    {
        cout<<"1/2";
    }
    else if(z==2)
    {
        cout<<"1/3";
    }
    else if(z==1)
    {
        cout<<"1/6";
    }
    else
    {
        cout<<"0/1";
    }
}