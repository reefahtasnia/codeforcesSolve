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
        string s;
        cin>>s;
        int i=0,j=n-1;
        int c=0;
        while(i<=j)
        {
            if(s[i]=='0' && s[j]=='1' || (s[i]=='1' && s[j]=='0'))
            {
                i++;
                j--;
                c+=2;
            }
            else break;
        }
        cout<<abs(n-c)<<endl;
    }
}