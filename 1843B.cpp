#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
		cin >> n; 
		vector<int> a(n);
		long long int sum = 0;
		for(int i = 0; i < n; ++i){
			cin >> a[i];
			if(a[i] < 0) sum += (-a[i]);
			else sum += a[i];
		}
		long long count = 0;
		for(int i = 0; i < n;){
			int j = i + 1;
			if(a[i] < 0){
				if(j == n){
					++count;
					break;
				}
				while(a[j] < 0 || a[j] == 0){
					++j;
					if(j == n) break;
				}
				++count;
			}
			i = j;
		}
		cout << sum << " " << count << endl;
    }
    return 0;
}