#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t; 
	while(t--){
		int n;
		cin >> n; 
		int sum = 0;
		int ans = 2;
		for(int i = 2; i <= n; ++i){
			int s = 0, k = 1;
			while(i * k <= n){
				s += i * k;
				k++;
			}
			if(sum < s){
				sum = s; 
				ans = i;
			}
		}
		cout << ans << endl;
	}
	return 0;
}