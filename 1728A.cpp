#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int s1;
        long long int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            long long int temp;
            cin >> temp;
            if (max <= temp)
            {
                max = temp;
                s1 = i + 1;
            }
        }
        cout << s1 << endl;
    }
}