#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n % 2){
            cout << "NO" << endl; 
            continue;
        }
        cout << "YES" << endl;
        for(long p = 0; 2 * p < n; p++)
            cout << ((p % 2) ? "AA" : "BB");
        cout << endl;
    }
}