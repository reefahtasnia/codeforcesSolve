#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &i : v) cin >> i;
	sort(v.begin(), v.end());
	int count = 0;
	for(int i = 1; i < n; ++i){
		if(v[i] - v[i - 1] > 1) count += v[i] - v[i - 1] - 1;
	}
	cout << count << endl; 
	return 0;
}