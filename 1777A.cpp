#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t; 
	while(t--){
		long long int n;
		cin >> n;
		vector<int> a(n);
		for(auto &i: a) cin >> i;
		long long int ans = 0;
		for(int i = 0; i < n; ++i){
			int j = i + 1;
			if(j == n) break;
			int count = 0;
			while(a[j] % 2 == a[i] % 2){
				++count;
				++j;
				if(j == n) break;
			}
			ans += count;
			i = j - 1;
		}
		cout << ans << endl;
	}
	return 0;
}
