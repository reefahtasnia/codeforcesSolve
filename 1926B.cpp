#include <bits/stdc++.h>
using namespace std;
#define IF(cond, t, f) (cond ? t : f)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> board(n);
        for (int i = 0; i < n; ++i)
            cin >> board[i];
        bool tria = false;
        for (int i = 0; i < n; ++i)
            if (count(board[i].begin(), board[i].end(), '1') == 1)
                tria = true;

        cout << IF(tria, "TRIANGLE", "SQUARE") << endl;
    }
}