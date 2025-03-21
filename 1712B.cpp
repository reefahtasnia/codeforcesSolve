#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        if (n % 2)
        {
            cout << "1 ";
            for (long p = 2; p < n; p += 2)
                cout << p + 1 << " " << p << endl;
        }
        else
            for (long p = 1; p < n; p += 2)
                cout << p + 1 << " " << p << " ";
        
        cout<<endl;
    }
}