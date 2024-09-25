#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        int max_k = 1;
        int zeros = 0;
        
        for (char c : s) {
            if (c == '0') {
                zeros++;
            }
        }
        
        if (zeros == 0) {
            cout << n << "\n";
            continue;
        }
        
        for (int k = 1; k <= n; k++) {
            int curr_zeros = 0;
            
            for (int i = 0; i < n; i += k) {
                for (int j = 0; j < k && i + j < n; j++) {
                    if (s[i + j] == '0') {
                        curr_zeros++;
                    }
                }
            }
            
            if (curr_zeros <= zeros) {
                max_k = k;
                break;
            }
        }
        
        cout << max_k << "\n";
    }
    
    return 0;
}