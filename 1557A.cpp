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
        long double sum=0, max=-1e11;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum+=x;
            if(x>max) max=x;
        }
        double res = max + (sum - max) / (n - 1);
        cout << fixed << setprecision(9) << res << endl;
    }
}