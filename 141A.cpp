#include<bits/stdc++.h>
using namespace std;
int freq1[26];
int freq2[26];
int main()
{
    string g,s,b;
    cin>>g;
    cin>>s;
    cin>>b;
    string res=g+s;
    sort(res.begin(),res.end());
    sort(b.begin(),b.end());
    if(res==b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}