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
		int d = 3;
		for(int i = 0; i < n; i += 1){
			if((d + 1) % 3 == 0) ++d;
			cout << d << ' ';
			++d;
		}
		cout << endl;
    }
}