#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0,pos=0,pos2=0;
        string s;
        cin>>s;
        //find the first "1"
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                pos=i;
                break;
            }
        }
        //find the last "1"
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                pos2=i;
                break;
            }
        }
        //count the number of "0" between the first and the last "1"
        for(int i=pos;i<pos2;i++)
        {
            if(s[i]=='0')
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}