#include<bits/stdc++.h>
using namespace std;
#define lli             long long int


lli m[10]{};
lli digNo(lli x){
	lli cnt = 0;
	while(x){
		++cnt;
		x /= 10;
	}
	return cnt;
}
bool isP(lli x){
	if(x <= 1) return false;
	if(x == 2) return true;
	if(x % 2 == 0) return false;
	for(lli i = 3; i * i <= x; i += 2) if(x % i == 0) return false;
	return true;
}

void prime(){
	for(lli i = 1; i <= 9; ++i){
		for(lli j = pow(10, i - 1); j < pow(10, i); ++j){
			if(isP(j)){
				m[i] = j;
				break;
			}
		}
	}
}
int main(){
    prime();
	int t;
	cin >> t; 
	while(t--){
		lli a, b, c;
		cin >> a >> b >> c;
		lli z = m[c];
		lli x = z, y = z;
		while(digNo(x) != a) x *= 2;
		while(digNo(y) != b) y *= 3;
		cout << x << ' ' << y << endl;
	}
	return 0;
}
