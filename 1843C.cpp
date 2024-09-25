#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long res = n;
		while(n){
			res+= n / 2;
			n /= 2;
		}
		cout << res << endl;
    }
}