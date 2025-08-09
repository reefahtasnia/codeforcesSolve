#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,k;
    long long x=0,n;
    map<long long,long long> mp;

    cin>>n;
    long long a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }

    map<long long,long long>::iterator p=mp.begin();
    while(p!=mp.end())
    {
        if(p->second>1 && p->first<=n)
            x+=(p->second-1);

        else if(p->first>n)
            x+=(p->second);

        p++;
    }

    cout<<x;
    return 0;
}