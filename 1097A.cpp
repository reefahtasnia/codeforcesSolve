#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    string s, x;
    cin>>s;

    for(int i=0;i<5;i++)
    {
        cin>>x;
        if(x[0]==s[0] || x[1]==s[1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}