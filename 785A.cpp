#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="Icosahedron") count+=20;
        if(s=="Cube") count+=6;
        if(s=="Octahedron") count+=8;
        if(s=="Dodecahedron") count+=12;
        if(s=="Tetrahedron") count+=4;
    }
    cout<<count<<endl;
}