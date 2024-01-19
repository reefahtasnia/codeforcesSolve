#include<bits/stdc++.h>
using namespace std;
int freq[26];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char s[105];
    gets(s);
    //puts(s);
    //cout<<endl;
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        char ch=s[i];
        freq[ch-'a']=1;
    }
    int res=0;
    for(int i=0;i<26;i++)
        if(freq[i]>0) res+=freq[i];
    if(res%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    return 0;
}