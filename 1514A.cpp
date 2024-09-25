#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n ;
	cin >> t;
	while(t--){
		cin >> n;
		int ai;
		int mul = 1, cnt = 0;
		for(int i = 0; i < n; ++i){
			cin >> ai;
			if(floor(sqrt(ai)) != ceil(sqrt(ai))) ++cnt;
		}
		if(cnt >= 1) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}