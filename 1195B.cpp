#include <bits/stdc++.h>
using namespace std;

long long test(long long n, long long x)
{
    return ((n - x) * (n - x + 1)) / 2 - x;
}

int main()
{

    long long i, j, k;
    long long n, m;

    cin >> n >> k;

    long long x = (2 * n + 3);
    long long y = sqrt(1.0 * (8 * n + 8 * k + 9));

    long long ans1 = (x + y) / 2;
    long long ans2 = (x - y) / 2;

    if (ans1 < ans2)
        swap(ans1, ans2);

    if (n - 1 >= ans1 && test(n, ans1) == k)
        cout << ans1 << endl;
    else
        cout << ans2 << endl;

    return 0;
}