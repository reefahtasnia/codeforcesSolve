#include<bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        bool possible=true;
        for (long p = 0; p < a.size(); p++)
        {
            if (a[p] == '1' && b[p] == '1')
            {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
}