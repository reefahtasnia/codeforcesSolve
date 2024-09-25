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
        int first = 0, sec = 0, third = 0;
        string a[3][n];
        map<string, int> mp;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
                string s = a[i][j];
                mp[s]++;
            }
        }
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                string s = a[i][j];
                if((mp[s] == 1) && i == 0) first += 3;
                else if((mp[s] == 2) && i == 0) first += 1;
                else if((mp[s] == 3) && i == 0) first += 0;
                else if((mp[s] == 1) && i == 1) sec += 3;
                else if((mp[s] == 2) && i == 1) sec += 1;
                else if((mp[s] == 3) && i == 1) sec += 0;
                else if((mp[s] == 1) && i == 2) third += 3;
                else if((mp[s] == 2) && i == 2) third += 1;
                else if((mp[s] == 3) && i == 2) third += 0;
            }
        }

        cout << first << " " << sec << " " << third << endl;
    }
}