#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    long t;
    cin>>t;
    while(t--){
        ll a, b; 
        cin>>a>>b;
        if(a > b){ll x = a; a = b; b = x;}
        int res(0);
        while(a < b){
            if(b % 8 == 0 && b / 8 >= a) b /= 8;
            else if(b % 4 == 0 && b / 4 >= a) b /= 4;
            else if(b % 2 == 0 && b / 2 >= a) b /= 2; 
            else break;
            ++res;
        }

        cout<< ((a == b) ? res : -1) << "\n";
    }

    return 0;
}