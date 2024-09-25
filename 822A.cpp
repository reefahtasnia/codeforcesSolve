#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    long long fact=1;
    for(int i=1;i<=min(a,b);i++){
        fact*=i;
    }
    cout<<fact<<endl;
}