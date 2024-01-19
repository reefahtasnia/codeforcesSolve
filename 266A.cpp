#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int countr=0,countb=0,countg=0;
    for(int i=0;i<n;i++)
    {
        if(s[i-1]==s[i]){
            if(s[i]=='R') countr++;
            else if(s[i]=='G') countg++;
            else if(s[i]=='B') countb++;
        }
    }
    cout<<countr+countb+countg<<endl;
    return 0;
}