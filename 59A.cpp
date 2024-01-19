#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //cout<<s;
    int cap_c=0, small_c=0;
    for(char ch:s)
    {
        if(ch>='A' && ch<='Z') cap_c++;
        else small_c++;
    }
    if(small_c>=cap_c){
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    cout<<s<<endl;
}