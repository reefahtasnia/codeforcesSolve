#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n(0);
    cin >> n;
    long numSevens(-1), numFours(-1), minDigits(1e6);

    for (long testSevens = n / 7; testSevens >= 0; testSevens--)
    {
        if ((n - 7 * testSevens) % 4 != 0)
            continue;
        long testFours = (n - 7 * testSevens) / 4;
        numSevens = testSevens;
        numFours = testFours;
        minDigits = numSevens + numFours;
        break;
    }

    if (numSevens >= 0 && numFours >= 0)
    {
        for (int k = 0; k < numFours; k++)
            cout << "4";
        for (int k = 0; k < numSevens; k++)
            cout << "7";
    }
    else
        cout << "-1";
    puts("");

    return 0;
}