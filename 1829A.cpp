#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int count=0;
        cin>>s;
        string s2="codeforces";
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]!=s2[i])
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
}