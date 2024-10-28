#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long long int n;
	cin >> t;
	while(t--){
		cin >> n;
		long long int put = n, dig_sum = 0;
		int cnt = floor(log10(put)) + 1;
		for(int i = 0; i < cnt; ++i){
			dig_sum = dig_sum + (put % 10);
			put /= 10;
		}
		while(__gcd(n, dig_sum) == 1){
			++n;
			put = n, dig_sum = 0;
			cnt = floor(log10(put)) + 1;
			for(int i = 0; i < cnt; ++i){
				dig_sum = dig_sum + (put % 10);
				put /= 10;
			}
		}
		cout << n << "\n";
	}
	return 0;
}