#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int md=0, even=0; 
        bool div=false;
        for(int p = 0; p < n; p++){
            int x; 
            cin>>x;
            x %= k;
            if(x){md = (md > x) ? md : x;}
            else{div = true;}
            if(x == 2){++even;}
        }

        if(div){cout<<"0"<<endl;}
        else if(k == 4){
            if(even >= 2){cout<<"0"<<endl;}
            else if(even >= 1 || md == 3){cout<<"1"<<endl;}
            else{cout<<"2"<<endl;}
        }
        else{
            cout<<k-md<<endl;
        }
    }
}