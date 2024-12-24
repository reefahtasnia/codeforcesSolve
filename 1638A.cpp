#include <bits/stdc++.h>
using namespace std;

int main(){
    long t; 
    cin>>t;
    while(t--){
        long n; 
        cin>>n;
        vector<long> a(n + 1); 
        long start(-1), stop(-1);
        for(long p = 1; p <= n; p++){
            cin>>a[p];
            if(start < 0 &&  p != a[p]) start = p;
            else if(a[p] == start) stop = p;
        }
        for(long p = 0; start > 0 && 2 * p <= stop - start; p++){
            long tmp = a[start + p];
            a[start + p] = a[stop - p];
            a[stop - p] = tmp;
        }
        for(long p = 1; p <= n; p++) cout<<a[p]<<" ";
        puts("");
    }
}