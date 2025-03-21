#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        string str;
        cin >> str;
        for (int i = n - 1; i >= 0; --i)
        {
            if (isalpha(str[i]))
            {
                count = i + 1;
                break;
            }
        }
        if (str.length() - count > count)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}