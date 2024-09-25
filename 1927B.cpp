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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        unordered_map<char,int> mp;
        int count=97;
        for(int i=0;i<n;i++)
        {
            if (a[i] == 0)
            {
                cout << char(count);
                mp[count]++;
                count++;
            }
            else
            {
                for (auto it : mp)
                {
                    if (it.second == a[i])
                    {
                        cout << char(it.first);
                        mp[it.first]++;
                        break;
                    }   
                }   
            }
        }
        cout<<endl;
    }
}