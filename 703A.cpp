#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int m, c;
    int winM = 0, winC = 0, draw = 0;
    while (t--)
    {
        cin >> m >> c;
        if (m > c)
            winM++;
        else if (m < c)
            winC++;
        else if (m == c)
            draw++;
    }
    if (draw == t || winM == winC)
        cout << "Friendship is magic!^^";
    else if (winM > winC)
        cout << "Mishka";
    else
        cout << "Chris";

    cout << endl;
}