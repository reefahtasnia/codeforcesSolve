#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string ans="2";
        bool even=false; 
        for(long i = 0; i < s.size(); i++){
            if((s[i] - '0') % 2 == 0){
                even = true;
                break;
            } 
        }
        if(!even) 
            ans = "-1";
        else if((s.back() - '0') % 2 == 0) 
            ans = "0";
        else if((s[0] - '0') % 2 == 0) 
            ans = "1";
        else
            ans = "2";
        cout << ans << endl;
    }
}