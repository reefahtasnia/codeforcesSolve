#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t; 
    cin>>t;
    while(t--){
        long long x1, y1, x2, y2; 
        cin>>x1>>y1>>x2>>y2;
        puts((x1 - y1) * (x2 - y2) > 0 ? "YES" : "NO");
    }
}