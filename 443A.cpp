#include<bits/stdc++.h>
using namespace std;
int freq[26];
int main()
{
    string s;
    getline(cin,s);
    int len=s.length();
    int count=0;
    //set<char>a;
    for(int i=0;i<len;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            //a.insert(s[i]);
            freq[s[i]-97]++;
        }
    }
    //cout<<a.size()<<endl;
    for(int i=0;i<26;i++){
        if(freq[i]>=1) count++;
    }
    cout<<count<<endl;
    return 0;
}