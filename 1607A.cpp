#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<char,int> mp;
        string keypad,s;
        cin>>keypad;
        for(int i=0;i<keypad.length();i++)
        {
            mp[keypad[i]]=i;
        }
        cin>>s;
        long long ans=0;
        int n=s.length();
	    for(int i=1;i<n;i++)
        {
            int x=mp[s[i-1]];
            int y=mp[s[i]];
            ans+=abs(y-x);
        }
        cout<<ans<<endl;
    }
}