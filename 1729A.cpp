#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long timeA=a-1;
        long long timeB=abs(b-c)+abs(c-1);
        if(timeA<timeB)
            cout<<"1"<<endl;
        else if(timeA>timeB)
            cout<<"2"<<endl;
        else
            cout<<"3"<<endl;
    }
    return 0;
}