#include<bits/stdc++.h>
using namespace std;
int freq[2000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        int a;
        vector<int> c(n+1,0);
        for(int i=0;i<n;i++) 
        {
            cin>>a;
            c[a]++;
        }
        for(int i=0;i<c.size();i++)
        {
            if(c[i]>=3)
            {
                cout<<i<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<-1<<endl; 
    }
    return 0;
}
