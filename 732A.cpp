#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,p;
    cin>>k>>r;
    int i=1;
    while(1)
    {
        p=k*i;
        if(p%10==0||p%10==r) 
        {
            cout<<i<<endl;
            break;
        }
        i++;
    }
    return 0;
}