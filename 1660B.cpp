#include "bits/stdc++.h"
using namespace std;

void test() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &A : a) cin >> A;
    if (n == 1) {
        if (a[0] == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        sort(a.begin(), a.end());
        if (a[n - 1] - a[n - 2] >= 2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}

int main() {
    int tc = 1;
    cin >> tc;
    for (int tt = 1; tt <= tc; ++tt) {
        test();
    }
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxFreq = *max_element(a.begin(), a.end());
        int maxCount = count(a.begin(), a.end(), maxFreq);

        if (maxFreq - 1 > (accumulate(a.begin(), a.end(), 0) - maxFreq) / maxCount) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}*/