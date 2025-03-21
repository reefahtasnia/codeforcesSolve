#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main()
{
    int n, m, a[100];
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    bubbleSort(a, n);

    int s=0;
    for (int i = 0; i < m; ++i)
    {
        if (a[i] >= 0) break;
        s += a[i];
    }
    cout << -s << endl;
}