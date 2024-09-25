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
        int start=0, stop=s.length()-1;
        while(s[start]=='W' && start<n)
        {
            start++;
        }
        while(s[stop]=='W' && stop>=0)
        {
            stop--;
        }
        int length=stop-start+1;
        cout<<length<<endl;
    }
}