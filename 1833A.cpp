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
        set<string> st;
        cin>>s;
        for (int i = 0; i < n - 1; i++)
			st.insert(s.substr(i, 2));
		cout << st.size() << endl;
    }
}