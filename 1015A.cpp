#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, m; 
    cin>>n>>m;
    vector<bool> v(m + 1, 1);
    long rem=m; 
    while(n--){
        long l, r; 
        cin>>l>>r;
        for(long p = l; p <= r; p++){
            rem -= v[p]; 
            v[p] = 0;
        }
    }
    cout<<rem<<endl;
    for(long p = 1; p <= m; p++)
        if(v[p]) cout<<p<<" ";
    puts("");
    return 0;
}