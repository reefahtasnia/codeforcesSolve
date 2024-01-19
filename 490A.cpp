#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int> v1,v2,v3;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1) v1.push_back(i);
        else if(a[i]==2) v2.push_back(i);
        else v3.push_back(i);
    }
    int mini=min(v1.size(),min(v2.size(),v3.size()));
    cout<<mini<<endl;
    for(int i=0;i<mini;i++)
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    return 0;
}