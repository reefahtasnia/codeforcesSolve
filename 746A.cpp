#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum = 0, flag = 0;
    while(flag != 1){
        if(a*2 <= b && ((a*2)*2) <= c){
            sum = a + a*2 + (a*2)*2;
            flag = 1;
        }
        else a--;
    }
    cout<<sum<<endl;
}