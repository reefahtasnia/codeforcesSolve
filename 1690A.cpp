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
        long long h1,h2,h3;
        if(n%3==0){
            h1=(n-3)/3;
            h2=(n-3)/3;
            h3=(n-3)/3;
            h1+=1;
            h2+=2;
        }
        else if(n%3==1){
            h1=(n-4)/3;
            h2=(n-4)/3;
            h3=(n-4)/3;
            h1+=1;
            h2+=3;
        }
        else if(n%3==2){
            h1=(n-5)/3;
            h2=(n-5)/3;
            h3=(n-5)/3;
            h1+=2;
            h2+=3;
        }
        cout<<h1<<" "<<h2<<" "<<h3<<endl;
    }
}