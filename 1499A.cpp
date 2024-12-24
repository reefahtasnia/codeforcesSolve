#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,k,l; 
        cin >> n>>k>>l;
        long w, b; 
        cin>>w>>b;
        bool ans = (2* w <= k + l && 2 * b <= (n - k) + (n - l));
        puts(ans ? "YES" : "NO");
    }
}