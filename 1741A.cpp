#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string size1,size2;
        cin>>size1>>size2;
        int n=size1.size();
        int m=size2.size();
        char c1 = size1[n - 1];
        char c2 = size2[m - 1];
        bool found = n > m;
        if (size1 == size2)
        {
            cout << "=\n";
            continue;
        }
        else if (c1 == c2 && c1 == 'S')
            found = !found;
        else if (c1 != c2)
            found = c1 < c2;
        if(found) cout<<">"<<endl;
        else cout<<"<"<<endl;
    }
}