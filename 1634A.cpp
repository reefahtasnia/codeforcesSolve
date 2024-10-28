#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    for (long p = 0; 2 * p < s.size(); p++)
    {
        if (s[p] != s[s.size() - 1 - p])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (!k) puts("1");
        else if (isPalindrome(s)) puts("1");
        else puts("2");
        
    }
    return 0;
}