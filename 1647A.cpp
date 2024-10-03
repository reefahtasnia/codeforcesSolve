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
        if (n % 3 == 1)
        {
            cout << 1;
            --n;
        }
        while (n > 0)
        {
            cout << 2;
            n -= 2;
            if (n <= 0)
                break;
            cout << 1;
            n -= 1;
        }

        cout << endl;
    }
    return 0;
}