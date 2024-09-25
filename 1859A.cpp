#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        vector<int> b,c;
        int mini=a[0];
        for(int i = 0; i < n; ++i){
			if(a[i] == mini) b.push_back(a[i]);
			else c.push_back(a[i]);
		}
		if(b.size() == 0 || c.size() == 0) cout << -1 << endl;
		else{
			cout << b.size() << ' ' << c.size() << endl;
			for(auto i: b) cout << i << ' '; cout << endl;
			for(auto i: c) cout << i << ' '; cout << endl;
		}
    }
}