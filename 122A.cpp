#include <bits/stdc++.h>
using namespace std;

bool lucky(int n)
{
    while (n != 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if(lucky(n)){
        cout << "YES" << endl;
        return 0;
    
    }
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0 && (lucky(i) || lucky(n / i))){
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}