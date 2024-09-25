#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        } 
        int maxi=*max_element(a,a+n);
        int mini=*min_element(a,a+n);
        for(int i = 0; i < n; i++){
            if(a[i]<maxi && a[i]>mini){
                mini=a[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i]!=maxi){
                cout<<a[i]-maxi<<" ";
            }
            else if(mp[a[i]]<=1){
                cout<<a[i]-mini<<" ";
            }
            else{
                cout<<a[i]-maxi<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}