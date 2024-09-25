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
        vector<int> a(n);
        int odd = 0, even = 0;
		int mini=INT_MAX;
        int minie = INT_MAX;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			if(a[i] % 2){
				++odd;
				mini = min(a[i], mini);
			}
            else{
				minie = min(minie, a[i]);
				++even;
			}
		}
		if(even){
			if(odd){
				if(mini <= minie) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;;
			}
            else cout<<"YES"<<endl;
		}
        else cout<<"YES"<<endl;
    }
}