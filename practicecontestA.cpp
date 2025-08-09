// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<a+b<<endl;
// }
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
        
        int maxL = 0;
        
        for (int l = 0; l < n; l++) {
            unordered_map<int, int> count;
            int curmax = 0;

            for (int r = l; r < n; r++) {
                count[a[r]]++;
                curmax = max(curmax, a[r]);
                
                if (count[curmax] <= k) {
                    maxL = max(maxL, r - l + 1);
                } else {
                    break;
                }
            }
        }
        
        cout << maxL << "\n";
    }
    
    return 0;
}