#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, ai;
	int arr1[405] = {}, arr2[405] = {};
	cin >> n;
	vector<int> v1;
	for(int i = 0; i < n; ++i){
		cin >> ai;
		v1.push_back(ai);
		++arr1[ai];
	}
	cin >> m;
	vector<int> v2;
	for(int i = 0; i < m; ++i){
		cin >> ai;
		v2.push_back(ai);
		++arr2[ai];
	}
	bool flag = false;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			int s = v1[i] + v2[j];
			if(arr1[s] == 0 && arr2[s] == 0){
				cout << v1[i] << ' ' << v2[j] << endl;
				flag = true;
				break;	
			}
		}
		if(flag) break;
	}
	return 0;
}