#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, n;
    cin >> n;
    N = n;
    if (n <= 10 && n % 4 != 0)
    {
        if (n < 4)
            cout << 4 << endl;
        else if (n < 8)
            cout << 8 << endl;
        else
            cout << 13 << endl;
        return 0;
    }
    while (1)
    {
        int sum = 0;
        while (n >= 10)
        {
            sum += n % 10;
            n /= 10;
            if (n < 10)
            {
                sum += n;
            }
        }
        if (sum % 4 == 0)
        {
            cout << N << endl;
            break;
        }
        else
        {
            N++;
            n = N;
        }
    }
    return 0;
}