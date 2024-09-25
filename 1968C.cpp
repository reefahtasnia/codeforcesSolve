#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> x(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> x[i];
        }

        vector<int> a(n);
        a[0] = x[0] + 1;
        for (int i = 1; i < n - 1; i++) {
            a[i] = max(x[i], a[i - 1]) + 1;
        }
        a[n - 1] = max(x[n - 2], a[n - 2]) + 1;

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}