#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int cnt = 0;
    for (int i = 1; i < n - 1; ++i){
        if (a[i] == 0 && a[i - 1] == 1 && a[i + 1] == 1){
            cnt++;
            a[i + 1] = 0; 
        }
    }
    cout << cnt << endl;
}