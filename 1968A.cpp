#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        int maxSum = 0;
        int y = 1;
        for (int i = x - 1; i >= 1; i--) {
            int sum = gcd(x, i) + i;
            if (sum > maxSum) {
                maxSum = sum;
                y = i;
            }
        }
        cout << y << endl;
    }

    return 0;
}