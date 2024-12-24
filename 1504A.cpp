#include "bits/stdc++.h"
using namespace std;
void Solution() {
    auto check = [](string S) {
        string T(S);
        reverse(T.begin(), T.end());
        return (S == T);
    };
    string s;
    cin >> s;
    if (!check('a' + s)) return void(cout << "YES\na" + s << '\n');
    if (!check(s + 'a')) return void(cout << "YES\n" + s + 'a' << '\n');
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution();
    }
}