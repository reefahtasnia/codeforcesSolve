#include<bits/stdc++.h>
using namespace std;
int freq[26];
int main()
{
    int n,flag=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
        freq[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]==0)
            flag=1;
    } 
    if(flag==0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}