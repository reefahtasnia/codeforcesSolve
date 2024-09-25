#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%7==0){
            cout<<n<<endl;
            continue;
        }
        for(int i=0;i<10;i++){
            long long num=((n/10)*10)+i;
            if(num%7==0){
                cout<<num<<endl;
                break;
            }
        }
    }
}