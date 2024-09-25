#include <bits/stdc++.h>
using namespace std;

bool intersect(int a, int b, int c, int d) {
    int min_ab = min(a, b);
    int max_ab = max(a, b);
    int min_cd = min(c, d);
    int max_cd = max(c, d);

    if (min_ab < min_cd && min_cd < max_ab && max_ab < max_cd) {
        return true;
    }
    if (min_cd < min_ab && min_ab < max_cd && max_cd < max_ab) {
        return true;
    }
    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (intersect(a, b, c, d) || intersect(a, b, d, c) || intersect(b, a, c, d) || intersect(b, a, d, c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}