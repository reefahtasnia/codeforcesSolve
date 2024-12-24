#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n; cin >> n;
		string s; cin >> s;
		bool ans(false);
		for(long p = 0; !ans && p < n; p++){
			if(s[p] == '0') ans = true;
		}
		cout << (ans ? "YES" : "NO") << endl;
    }
}