#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(auto &i : a) cin >> i;
		sort(a.begin(),a.end());
		for(int i = 0; i < n - 1; ++i){
			if(a[i] == a[i + 1]) a[i] = - a[i];
		}
		set<int> s;
		for(auto i : a) s.insert(i);
		cout << s.size() << endl;
	}

	return 0;
}