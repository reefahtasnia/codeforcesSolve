#include<bits/stdc++.h>
using namespace std;
template<typename type> type Round(type a, type b) {if(a < b) return 1; if(a % b) return 1 + a / b; return a / b;}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
		cin >> n; 
		int cnt = 0;
		for(int i = 0, ai; i < n; ++i){
			cin >> ai;
			if(ai == (i + 1)) ++cnt;
		}
		if(cnt == 0) cout << 0 << endl;
		else cout << Round(cnt, 2) << endl;
    }
}