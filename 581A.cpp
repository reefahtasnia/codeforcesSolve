#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a >= b)
    {
        a = a - b;
        a /= 2;
        cout << b << " " << a << "\n";
    }
    else
    {
        b = b - a;
        b /= 2;
        cout << a << " " << b << "\n";
    }
}