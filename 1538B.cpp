#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<int> a(n);
        long long s=0;
        for(long long p=0;p<n;p++)
        {
            cin>>a[p];
            s+=a[p];
        }
        if(s%n!=0){
            cout<<-1<<endl;
            continue;
        }
        long long num=s/n;
        long long k=0;
        for (long long i = 0; i < n; i++)
        {
            if(a[i]>num)
            {
                k++;
            }
        }
        cout<<k<<endl;        
    }
}