#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t; 
	while(t--){
		long long n, k;
		cin >> n >> k; 
		vector<long long> b(n);
		long long ml = 1ll;
		for(int i = 0; i < n; ++i){
			cin >> b[i];
			ml *= b[i];
		}
		if(2023 % ml != 0) cout << "NO" << endl;
		else{
			cout << "YES" << endl;
			cout << 2023 / ml << ' ';
			for(int i = 0; i < k - 1; ++i) cout << 1 << ' ';
			cout << endl; 
		} 
	}
	return 0;
}