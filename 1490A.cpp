#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0,a,b,x,prev;
        cin>>prev;
        for(int i = 1; i < n; i++){
            cin>>x;
            if(x<prev) a=x,b=prev;
            else a=prev,b=x;
            while(2 * a < b){
                a *= 2; 
                ++count;
            }
            prev = x;
        }
        cout<<count<<endl;
    }
}