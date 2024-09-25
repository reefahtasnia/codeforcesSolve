#include <bits/stdc++.h>
using namespace std;

int main(){

    long t; 
    cin>>t;
    while(t--){
        long cnt=0;
        for(int row = 0; row < 2; row++){
            for(int col = 0; col < 2; col++){
                long x; 
                cin>>x;
                cnt += x;
            }
        }

        long res=0;
        if(cnt == 4){res = 2;}
        else if(cnt > 0){res = 1;}
        cout<<res<<endl;
    }

}