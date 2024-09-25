#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s="codeforces";
        char ch;
        cin>>ch;
        bool a=false;
        for(int i=0;i<s.length();++i)
        {
            if(ch==s[i])
            {
                a=true;
                break;
            }
        }
        if(a==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}