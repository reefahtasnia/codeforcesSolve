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
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        int count=n;
        sort(a.begin(), a.end());
        for (int i = 1; i < n; i += 2)
            if (a[i] == 1) count--;
        cout << count << endl;
    }
}