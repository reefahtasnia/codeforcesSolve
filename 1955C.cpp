#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int sunk = 0;
        deque<int> q;
        
        for (int i = 0; i < k; i++) {
            if (q.empty()) {
                for (int j = 0; j < n; j++) {
                    if (a[j] > 0) {
                        q.push_back(j);
                        break;
                    }
                }
            }
            
            int idx = q.front();
            q.pop_front();
            
            a[idx]--;
            if (a[idx] == 0) {
                sunk++;
            } else {
                q.push_back(idx);
            }
        }
        
        cout << sunk << "\n";
    }
    
    return 0;
}