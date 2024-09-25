#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t; 
	while(t--){
		int a, b, c; 
		cin >> a >> b >> c; 
		int ans = a; 
		ans += ceil((b * 1.000) / 3);
		if(b % 3) b = 3 - b % 3;
		else b = 0;
		if(c < b) ans = -1;
		else{
			c -= b; 
			ans += ceil((c * 1.00) / 3.00);
		}
		cout << ans << endl;
	}
	return 0;
}
