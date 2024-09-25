#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string cards;
        cin>>cards;
        int swap=0;
        if(cards[0]!='a') swap++;
        if(cards[1]!='b') swap++;
        if(cards[2]!='c') swap++;
        if(swap<=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}