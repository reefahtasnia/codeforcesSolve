#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string name;
        string ans="Timru";
        cin>>name;
        sort(name.begin(),name.end());
        if(name==ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}