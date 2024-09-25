#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        bool stair=false;
        bool peak=false;
        if(a<b && b<c) stair=true;
        if(a<b && b>c) peak=true;
        if(stair) cout<<"STAIR\n";
        else if(peak) cout<<"PEAK\n";
        else cout<<"NONE\n";
    }
}