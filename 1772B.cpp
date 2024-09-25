#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        int flag = 0;
        for (int i = 0; i < 4; i++)
        {
            if (a < b && a < c && c < d && b < d)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
            else
            {
                int temp = a;
                a = c;
                c = d;
                d = b;
                b = temp;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
}