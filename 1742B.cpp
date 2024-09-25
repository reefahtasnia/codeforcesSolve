#include <bits/stdc++.h>
using namespace std;
map<long long int, long long int> mp;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        mp.clear();
        long long int n, i,flag=0;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            if(mp[a[i]]>1) flag=1;
        }
        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}