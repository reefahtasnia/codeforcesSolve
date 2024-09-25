#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum1=0,sum2=0;
        string n;
        cin>>n;
        for(int i=0;i<n.length();i++)
        {
            if(i<3) sum1+=n[i];
            else sum2+=n[i];
        }
        if(sum1==sum2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}