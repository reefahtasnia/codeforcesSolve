#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        char ch;
        cin>>ch;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==ch && i%2==0)
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
    }
}