#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        int arr[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            sum += abs(arr[i]);
        }

        cout << sum << endl;
    }
}