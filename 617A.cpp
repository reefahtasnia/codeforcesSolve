#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,res=0;
    cin>>x;
    res=x/5;
    if(x%5 != 0) res+=1;
    cout<<res<<endl;
}