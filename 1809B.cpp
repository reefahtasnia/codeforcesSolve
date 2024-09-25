#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        N -= 1;
        unsigned long long l = 0, r = 1e10;
        long long ans = 1;
        while(l <= r) {
            long long mid = (l + r) / 2;
            if (mid * mid <= N) {
                ans = mid;
                l = mid + 1;
            } else {    
                r = mid - 1;
            } 
        }
        cout << ans << endl;
    }
}