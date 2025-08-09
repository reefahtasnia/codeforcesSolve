#include <bits/stdc++.h>
using namespace std;

int main(){

    long t; cin >> t;
    while(t--){
        long n; cin >> n;
        vector<long> a(n); for(long p = 0; p < n; p++) cin>> a[p];
        sort(a.begin(), a.end());
        long res(a[0]);
        for(long p = 1; p < a.size(); p++){
            long diff = a[p] - a[p - 1];
            res = (res > diff) ? res : diff;
        }

        cout<<res<<endl;
    }

}