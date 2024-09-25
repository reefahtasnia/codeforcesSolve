#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sort1(v) sort(v.begin(), v.end());
#define sort2(v) sort(v.rbegin(), v.rend());
 
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(n),cnt(101);
    for(auto&a:v){
        cin>>a;
        cnt[a]++;
        }
    int num=v[m-1];
    sort2(v);
    v.push_back(0);
    if(v[k-1]==num&&v[k]==num){
        cout<<"MAYBE"<<endl;
    }else if(v[k-1]<=num){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
 
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
