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
        string s;
        cin>>s;
        char f = s[0];
		s[0] = '0';
		for(int i = 1; i < n; ++i) if(s[i] == f) s[i] = '0';
		for(int i = 1; i < n; ++i){
			if(s[i] == '0' || s[i] == '1') continue;
			if(s[i - 1] == '0'){
				f = s[i];
				for(int j = i; j < n; ++j) if(s[j] == f) s[j] = '1';
			}else{
				f = s[i];
				for(int j = i; j < n; ++j) if(s[j] == f) s[j] = '0';
			}
		}
		bool flag = 0;
		for(int i = 1; i < n; ++i){
			if(s[i] == s[i - 1]){flag = 1; break;}
		}
		if(flag) cout << "NO" << endl;
		else cout << "YES" << endl;
    }
}