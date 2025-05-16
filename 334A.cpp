#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b;
    cin >> n;
    a = 1;
    b = n * n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            cout << a << " ";
            a++;
        }
        for (int j = 0; j < n / 2; j++)
        {
            cout << b << " ";
            b--;
        }
        cout << endl;
    }
    return 0;
}