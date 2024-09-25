#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int count_a=0, count_b=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
            {
                count_a++;
            }
            else
            {
                count_b++;
            }
        }
        if(count_a>count_b)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
}