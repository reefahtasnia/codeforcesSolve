#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) 
        {
            cin>>arr[i];
        }
        int flag=0;
        int mini=arr[1]-arr[0]; //taking the difference of first two numbers as minimum for comparision
        for(int i=0;i<n-1;i++)
        {
            int diff=arr[i+1]-arr[i];//calculate the difference between consecutive numbers
            if(diff<0)
            {
                flag=1;//if the numbers are in not in order, break loop
                break;
            }
            else
                mini=min(mini,diff);//keep track of minimum difference
        }
        if(flag==1) cout<<"0\n";
        else cout<<(mini/2)+1<<"\n";//if number is set calcuate the number of operations needed
    }
    return 0;
}