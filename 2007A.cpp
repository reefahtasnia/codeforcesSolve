#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t; 
    cin>>t;
    while(t--){
        long a, b;
        cin>>a>>b;
        cout<<((b + 1) / 2 - (a / 2)) / 2<<endl;
    }
}