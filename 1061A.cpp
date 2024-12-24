#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, S;
    cin >> n >> S;
    int count = 0;
    for (int i = n; i > 0; i--)
    {
        int k = (S / i);
        count += k;
        S -= k * i;
    }
    cout << count << endl;
}
