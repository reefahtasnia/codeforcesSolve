#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        long long ans=0, pow=1;;
        for(int p = 9; p > 0; p--){
            if(p > s){continue;}
            ans += pow * p; 
            pow *= 10;
            s -= p;
        }
        cout<<ans<<endl;
    }
}