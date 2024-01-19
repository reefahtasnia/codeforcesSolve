#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    int a=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int min=ar[0];
    int max=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]>max){
            max=ar[i];
            a++;
        }
        if(ar[i]<min){
            min=ar[i];
            a++;
        } 
    }
    //c=a+b-2;
    //if(a+b==n and max!=min) cout<<n-1<<endl;
    //else 
    cout<<a<<endl;
}