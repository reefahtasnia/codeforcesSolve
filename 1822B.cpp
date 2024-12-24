#include<bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin >> t;
    while (t--)
    {
        long n; 
        cin>>n;
        vector<long long> a(n); for(long long p = 0; p < n; p++) cin>>a[p];
        sort(a.begin(), a.end());
        long long u = a[0] * a[1];
        long long v = a[n - 2] * a[n - 1];
        cout<<(u > v ? u : v)<<endl;
    }
}