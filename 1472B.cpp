#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count_1=0,count_2=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            if(a[i]==1) count_1++;
            else count_2++;
        }
        //cout<<count_1<<" "<<count_2<<endl;
        if(count_1%2==0 && count_2%2==0) 
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if(count_1%2==0 && count_2%2!=0 && count_1>0) 
        {
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}