#include <bits/stdc++.h>
using namespace std;

int main(){
    const int N = 101;
    long t; 
    cin >> t;
    while(t--){
        long n; 
        cin>>n;
        vector<long> v(N, 0); 
        bool res(true);
        for(long p = 0; p < n; p++){
            long x; 
            cin>>x; 
            ++v[x];
        }
        for(long p = 1; res && p < N; p++)
            if(v[p - 1] < v[p]) res = false;
        puts(res ? "YES" : "NO");
    }
    return 0;
}