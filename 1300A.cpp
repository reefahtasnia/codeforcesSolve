#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int zero=0, sum=0, total=0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            if(arr[j]==0)
                zero++;
            sum=sum+arr[j];
        }
        
        if(zero==0){
            if(sum==0)
                cout<<"1"<<endl;
            else
                cout<<"0"<<endl;
        }
        else{
            total=zero;
            sum=sum+zero;
            if(sum==0)
                cout<<total+1<<endl;
            else
                cout<<total<<endl;
        }
    }
}