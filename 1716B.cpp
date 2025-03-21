#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while(t--){
        long long int n, a[100000]; 
        cin >> n;
        cout << n << endl;
        for(int i = 1; i <= n; i++){
            a[i] = i;
            cout << a[i] << " ";
        }
        cout << endl;
        for(int i = 2; i <= n; i++){
            swap(a[i], a[i - 1]);
            for(int j = 1; j <= n; j++)
                cout << a[j] << " ";
            cout << endl;
        }
    }
    return 0;
}