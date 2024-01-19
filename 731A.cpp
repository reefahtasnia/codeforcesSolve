#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int count=0;
    int d=s[0]-'a';
    if(d>13) count+=26-d;
    else count+=d;
    for(int i=0;i<len-1;i++)
    {
        int a=s[i]-'a';
        int b=s[i+1]-'a';
        if(a>b)
        {
            if(a-b>13) count+=26-(a-b);
            else count+=a-b;
        }
        else
        {
            if(b-a>13) count+=26-(b-a);
            else count+=b-a;
        }
    }
    cout<<count<<endl;
}