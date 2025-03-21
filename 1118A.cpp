#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    long q; 
    cin>>q;
    while(q--){
        ll n, a, b;
        cin>>n>>a>>b;
        ll ans(0);
        if(2 * a < b) ans = n * a;
        else ans = (n % 2) * a + (n / 2) * b;
        cout<<ans<<endl;
    }
}