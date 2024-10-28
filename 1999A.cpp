#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        long s=0; 
        while(n){
            s += n % 10; 
            n /= 10;
        }
        cout<<s<<endl;
    }
}