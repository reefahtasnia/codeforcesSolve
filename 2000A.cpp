#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        bool res;
        if (x.size() <= 2) {
            res = false;
        } else if (x[0] != '1') {
            res = false;
        } else if (x[1] != '0') {
            res = false;
        } else if (x[2] == '0') {
            res = false;
        } else if (x == "101") {
            res = false;
        } else {
            res = true;
        }
        cout << (res ? "YES" : "NO") << endl;
    }
}