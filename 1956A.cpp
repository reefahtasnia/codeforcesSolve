#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while(t--){
		int k, q;
		cin >> k >> q; 
		int mn = INT_MAX;
		for(int i = 0, ai; i < k; ++i){
			cin >> ai; 
			mn = min(mn, ai);
		}
		for(int i = 0, ai; i < q; ++i){
			cin >> ai; 
			cout << min(mn - 1, ai) << ' ';
		}
		cout << endl;
	}
	return 0;
}
