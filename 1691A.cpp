#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(odd<even) cout<<odd<<endl;
        else cout<<even<<endl;
    }
}