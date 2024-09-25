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
        {
            cin>>a[i];
        }
        long long ans=0;
        for (int i = 0; i < n; i++)
        {
            long long x= 0;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    x = x ^ a[j];
                }
            }
     
            if (x == a[i])
                ans = x;
        }
     
        cout << ans << endl;
    }
}