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
        int a[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        
        int oddCount = 0;
        for(int i=0;i<2*n;i++)
        {
            if(a[i] % 2 == 1)
                oddCount++;
        }
        
        if(oddCount == n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}