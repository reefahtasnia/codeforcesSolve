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
        int mini=min(a,b);
        int maxi=max(a,b);
        if(maxi-mini>=mini && 2*(maxi-mini)>=c) {
            if(c<=maxi-mini) cout << c+maxi-mini << endl;
            else cout << c-(maxi-mini) << endl;
        } 
        else  cout << -1 << endl; 
    }
    return 0;
}