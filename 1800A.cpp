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
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<n;i++) s[i]=tolower(s[i]);
        s.erase(unique(s.begin(),s.end()),s.end());
        if(s=="meow") cout<<"YES\n";
        else cout<<"NO\n";
    }
}