#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        vector<long long> v(n);
        for(long long i=0;i<n;i++)
        {
            cin >> v[i];
        }
        bool isorteddd = is_sorted(v.begin(), v.end());
        if(isorteddd)
        {
            cout << "YES" << endl;
            continue;
        }   
        if(k==1 && isorteddd==false)
        {
            cout << "NO" << endl;
            continue;
        }
        else{
            cout << "YES" << endl;
        }
    }
}