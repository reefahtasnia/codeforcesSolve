#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(auto &i: a) cin >> i;
		string s;
		cin >> s;
		string ans = s;
		for(int i = 0; i < n; ++i){
			int d = a[i];
			for(int j = 0; j < n; ++j){
				if(a[j] == d) ans[j] = s[i];
			}
		}
		if(ans == s) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
