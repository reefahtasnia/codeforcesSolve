#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(c%2==1)
        {
            if(a+1>b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
        else
        {
            if(a>b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }
}