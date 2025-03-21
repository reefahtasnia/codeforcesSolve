#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[11];
    string s;
    cin>>n>>s;
    fill(a,a+11,0);
    for(int i=0; i<n; i++){
        if(s[i] == 'L'){
            for(int j=0; j<n; j++){
                if(a[j] != 1){
                    a[j] = 1;
                    break;
                }
            }
        }
        else if(s[i] == 'R'){
            for(int j=9; j>=0; j--){
                if(a[j] != 1){
                    a[j] = 1;
                    break;
                }
            }
        }
        else{
            a[s[i] - '0'] = 0;
        }
    }
    for(int i=0; i<=9; i++){
        cout<<a[i];
    }
    cout<<endl;
}