#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string x;
        cin>>x;
        int l=(int)x.length();
        int dig=x[0]-'0'-1;
        cout<<dig*10+l*(l+1)/2<<endl;
    }
}