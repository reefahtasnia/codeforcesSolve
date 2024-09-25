#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int d=0;
        cin>>n;
        vector<int> a(n);
        vector<vector<int> > m(110, vector<int>());
        vector<int> b(n, 1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]].push_back(i);
            if(m[a[i]].size() == 2) ++d;
        }
        if(d < 2){
            cout<<"-1"<<endl;
            continue;
        }
        int cur=0;
        for(int i = 0; i < 110; i++){
            if(m[i].size() < 2) continue; 
            b[m[i][0]] = 2 + cur; 
            cur = 1 - cur;
        }
        for(auto x:b) cout<<x<<" ";
        cout<<endl;
    }
}
