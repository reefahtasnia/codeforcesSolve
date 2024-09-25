#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;

bool isSquare(string s) {
    int len = s.length();
    if(len % 2 == 1) return false;
    string firstHalf = s.substr(0, len/2);
    string secondHalf = s.substr(len/2, len/2);
    return firstHalf == secondHalf;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(isSquare(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}