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
        int maxQ=-1;
        int winres=-1;
        for(int i=1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;
            if(a<=10 && b>maxQ)
            {
                maxQ=b;
                winres=i;
            }
        }
        cout<<winres<<"\n";
    }
    return 0;
}