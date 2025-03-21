#include <bits/stdc++.h>
using namespace std;

int main(){

    long t; 
    cin>>t;
    while(t--){
        long xa, ya, xb, yb, xc, yc;
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
        puts( ((xa == xb || xa == xc || xb == xc) && (ya == yb || ya == yc || yb == yc))  ? "NO" : "YES");
    }

}