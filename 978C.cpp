#include <bits/stdc++.h>
using namespace std;

long long int lowbound(vector<long long int> &v, long long value)
{
    long long int low = 0, high = v.size() - 1;
    while (low < high)
    {
        long long mid = low + ((high - low) >> 1);
        if (v[mid] < value)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<long long int> dormitors(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> dormitors[i];

    vector<long long int> summ(n + 1);
    for (int i = 1; i <= n; i++)
        summ[i] += summ[i - 1] + dormitors[i];
    for (int i = 0; i < m; i++)
    {
        long long int room;
        cin >> room;
        long long int ind = lowbound(summ, room);
        long long int roomno = room - summ[ind - 1];
        cout << ind << " " << roomno << endl;
    }
    return 0;
}