#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int untreat=0,cur_offr=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0) cur_offr+=a[i];
        else
        {
            if(cur_offr<1) untreat++;
            else cur_offr--;
        }
    }
    cout<<untreat<<endl;
}