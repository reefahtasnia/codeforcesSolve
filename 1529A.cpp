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
        int count=0;
        int min=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x<min)
            {
                min=x;
                count=1;
            }
            else if(x==min) count++;
        }
        cout<<n-count<<endl;
    }
}