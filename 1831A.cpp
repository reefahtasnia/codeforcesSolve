#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		for(int i = 0, ai; i < n; ++i){
			cin >> ai;
			if(ai == 1){
				cout << n << ' ';
			}else if(ai == n) cout << 1 << ' ';
			else cout << (n + 1) - ai << ' ';
		}
		cout << endl;
	}
	return 0;
}