#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=1;i<n;i++)
        {
            if(s[c]==s[i])
            {
                cout<<s[i];
                i++;
                c=i;
            }
        }
        cout<<endl;
    }
}