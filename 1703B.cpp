#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,balloon=0;
        cin>>n;
        string s;
        cin>>s;
        vector<int>count(26);
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            int a=s[i]-'A';
            if(count[a]==0) count[a]+=2;
            else count[a]++;
        }
        for(int i=0;i<26;i++)
        {
            balloon+=count[i];
        }
        cout<<balloon<<endl;
    }
}