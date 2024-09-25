#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int m=n.length();
    int count,x,y;
    count=x=y=0;
    for(int i=0;i<m;i++)
    {
        if(n[i]=='Q')
        {
            count+=x;
            y++;
        }
        else if(n[i]=='A')
        {
            x+=y;
        }
    }
    cout<<count<<endl;
}