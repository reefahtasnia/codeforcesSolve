#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long k;
        cin>>k;
        long long index=0; 
        while(index * index < k)  ++index;
        long long row=index, col=index;
        long long rem=k-(index-1)*(index-1);
        if(rem<=index) row=rem;
        else col=2*index-rem;
        cout<<row<<" "<<col<<endl;
    }
}