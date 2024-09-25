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
        int start=1;
        if(n % 2){
            start = 4; 
            cout<<"3 1 2 ";
        }
        for(int p = start; p < n; p += 2) cout<<p+1<<" "<<p<<" ";
        cout<<endl;
    }
}