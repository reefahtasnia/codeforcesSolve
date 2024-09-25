#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        cout << str;
        for(int i = str.length() - 1; i >= 0; i--)
            cout << str[i];
        cout << endl;
    }
}

