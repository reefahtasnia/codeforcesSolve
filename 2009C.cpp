#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long x, y, k; 
        cin>>x>>y>>k;
        x = (x + k - 1) / k;
        y = (y + k - 1) / k;
        cout<<2 * (x > y ? x : y) - (x > y)<<endl;
    }
}