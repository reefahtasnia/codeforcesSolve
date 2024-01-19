#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    //cin>>s;
    int t=0;
    while(n--)
    {
        cin>>s;
        if(s=="++X" || s=="X++" ) t=t+1;
        else if(s=="X--" || s=="--X")t=t-1;
    }
    cout<<t<<endl;
    

}