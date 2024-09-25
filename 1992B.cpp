#include<bits/stdc++.h>
using namespace std;
using i64 = long long int;

int main(){
	int t;
	cin >> t; 
	while(t--){
		int n, k;
		cin >> n >> k; 
		vector<int> a(k);
		for(int i=0;i<k;++i) cin >> a[i];
		sort(a.begin(),a.end());
		i64 ans = 0ll;
		for(int i = 0; i < k - 1; ++i){
			if(a[i] == 1) ans += 1ll;
			else ans += (i64) (a[i] + a[i] - 1);
		}
		cout << ans << endl;
	}
	return 0;
}