#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n+5];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<long long>());
        long long ans = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] > a[j]){
                    ans++;
                    break;
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}