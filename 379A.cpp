#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = a, mod, div1;
    while (a >= b)
    {
        div1 = a / b;
        sum += div1;
        mod = (a % b);
        a = div1 + mod;
    }
    cout << sum << endl;
    return 0;
}