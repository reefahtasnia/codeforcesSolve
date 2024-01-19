#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count_A=0,count_D=0;
    for(char c:s)
    {
        if(c=='A') count_A++;
        else count_D++;
    }
    //cout<<count_A<<" "<<count_D<<endl;
    if(count_A>count_D) cout<<"Anton\n";
    else if(count_D>count_A) cout<<"Danik\n";
    else cout<<"Friendship\n";
    return 0;
}