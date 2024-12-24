#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    map<string,int> mp;
    while(n--)
    {
        cin>>s;
        if(!mp[s])
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

        mp[s]++;
    }
}
