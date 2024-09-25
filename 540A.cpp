#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string given,pass;
    cin>>given>>pass;
    int moves=0;
    for(int i=0; i<n; i++)
    {
        int a=abs(given[i]-pass[i]);
        int b=10-a;
        moves+=min(a,b);
    }
    cout<<moves<<endl;
}