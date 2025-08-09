#include<bits/stdc++.h>
using namespace std;

bool solve(string s)
{
    char ac1, ac2;
	char bc1, bc2;

	int i = 0;
	int j = s.length() - 1;

	while (i < j)
	{
		if (s[i] == s[j]) {
			i++; j--;
			continue;
		}

		if (s[i] == 'a')
			ac1 = ac2 = 'b';
		else if (s[i] == 'z')
			ac1 = ac2 = 'y';
		else
			ac1 = s[i] - 1, ac2 = s[i] + 1;

		if (s[j] == 'a')
			bc1 = bc2 = 'b';
		else if (s[j] == 'z')
			bc1 = bc2 = 'y';
		else
			bc1 = s[j] - 1, bc2 = s[j] + 1;

		if (ac1 == bc1 || ac1 == bc2 || ac2 == bc1 || ac2 == bc2) {
			i++; j--;
			continue;
		}

		return false;
	}

	return true;
}

int main()
{
	int n, t;
	string s;
	
	cin>>t;
	while (t--)
	{
		cin>> n;
		cin >> s;

		if (solve(s))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}

	return 0;
}