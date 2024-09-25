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
        int i;
        string pi="314159265358979323846264338327";
        for(i=0;i<s.length();i++)
        {
            if(s[i]!=pi[i])
            {
                break;
            }
        }
        cout<<i<<endl;
    }
}