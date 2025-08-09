#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    string direction;
    cin >> direction;
    long minDist(-1);
    long lastRight(-1);

    for (long p = 0; p < n; p++)
    {
        int to = direction[p] == 'R' ? 1 : -1;
        long x;
        cin >> x;
        if (to > 0)
            lastRight = x;
        else if (lastRight >= 0 && (minDist < 0 || (x - lastRight < minDist)))
            minDist = x - lastRight;
    }

    long minTime = (minDist < 0) ? (-1) : (minDist / 2);
    cout << minTime << endl;

    return 0;
}