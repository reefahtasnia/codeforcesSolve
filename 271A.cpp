#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y, a, b, c, d;
    cin >> y;
    // put all 4 digits in different variables
    // can use array but felt like it was too much hassle
    while (1)
    {
        y += 1;
        a = y / 1000;
        b = (y / 100) % 10;
        c = (y / 10) % 10;
        d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d) // check if all digits are differemt
        {
            cout << y << endl;
            break;
        }
    }
    return 0;
}