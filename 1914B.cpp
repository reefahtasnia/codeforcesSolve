#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
		int n, k;
		cin >> n >> k; 
		vector<int> ans(n + 1, 0);
		for(int i = 1; i <= n; ++i){
			ans[i] = i;
		}
		reverse(ans.begin(),ans.end());
		reverse(begin(ans) + (n - k - 1), end(ans) - 1);
		for(int i = 0; i < n; ++i) cout << ans[i] << ' '; cout << endl;
    }
}