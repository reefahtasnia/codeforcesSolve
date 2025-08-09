#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k;
    int n, m;

    cin >> n;

    vector<int> x, y;
    map<int, int> mp;

    for(i = 0; i < n; i++)
    {
        cin >> m;

        mp[m]++;
        if(mp[m] == 1)
            x.push_back(m);

        else if(mp[m] == 2)
            y.push_back(m);

        else
        {
            cout<<"NO\n";
            return 0;
        }
    }

    sort(x.begin(), x.end(), greater<int>());
    sort(y.begin(), y.end());

    cout<<"YES\n";

    cout<<y.size()<<endl;
    for(int e : y)
        cout<<e<<" ";

    cout<<endl;

    cout<<x.size()<<endl;
    for(int e : x)
        cout<<e<<" ";

    return 0;
}