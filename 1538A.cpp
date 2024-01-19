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
        int maxi=-99;
        int mini=9999999;
        int maxind=0;
        int minind=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>maxi){
                maxi=a[i];
                maxind=i;
            }
            if(a[i]<mini){
                mini=a[i];
                minind=i;
            }
        }
        if(minind>maxind){
            swap(minind,maxind);
        }
        int ans1=minind+1+n-maxind;
        int ans2=maxind+1+n-minind;
        int ans3=maxind+1;
        int ans4=n-minind;
        int ans=min(ans1,min(ans2,min(ans3,ans4)));
        cout<<ans<<endl;
    }
}