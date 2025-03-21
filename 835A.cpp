#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, v1, v2, t1, t2, a, b;

    cin >> s >> v1 >> v2 >> t1 >> t2;
    a = 2 * t1 + s * v1;
    b = 2 * t2 + s * v2;

    if (a < b)
        cout << "First" << "\n";
    else if (a > b)
        cout << "Second" << "\n";
    else
        cout << "Friendship" << "\n";
}
