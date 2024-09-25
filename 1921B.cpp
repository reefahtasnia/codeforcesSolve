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
        string s,f;
        cin>>s;
        cin>>f;
        long long ans1 = 0, ans2 = 0; 
		for(int i = 0; i < n; ++i){
			if(s[i] == '0' && f[i] == '1') ans1 += 1; 
			else if(s[i] == '1' && f[i] == '0') ++ans2;
		}
		cout << max(ans1, ans2) << endl;
    }
}