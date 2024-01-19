#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    char a[n][m];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y')
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
}