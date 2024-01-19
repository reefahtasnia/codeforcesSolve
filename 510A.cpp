#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for(int j=1;j<=m;j++)
        {
            if(i%4==2 && i%2==0 && j-m!=0) cout<<".";
            else if(i%4==0 && j-1==0) cout<<"#";
            else if(i%4==0 and j-1!=0) cout<<".";
            else cout<<"#";
        }
        cout<<"\n";
    }
    return 0;
}