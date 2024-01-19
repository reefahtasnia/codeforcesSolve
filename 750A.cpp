#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int res=0,num=240-k,count=0;
    for(int i=1;i<=n;i++)
    {
        res+=(5*i);
        if(res>num)
            break;
        count++;
    }
    cout<<count<<endl;
    return 0;
}