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
        for(int i=0;i<n;i++)   cin>>a[i];
        int d;
        string s;
        for(int i=0;i<n;i++){
            cin>>d;
            cin>>s;
            for(int j=0;j<d;j++){
                if(s[j]=='U'){
                    if(a[i]==0) a[i]=9;
                    else a[i]--;
                }
                else{
                    if(a[i]==9) a[i]=0;
                    else a[i]++;
                }
            }
        }
        for(int i=0;i<n;i++)   cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}