#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        string s;
        cin >> s;

        long left(0);
        while (left < s.size() && s[left] == '0')
            ++left;
        long right(s.size() - 1);
        while (right >= 0 && s[right] == '1')
            --right;

        vector<long> v;
        while (left < right)
        {
            v.push_back(left);
            ++left;
            v.push_back(right);
            --right;
            while (left < s.size() && s[left] == '0')
                ++left;
            while (right >= 0 && s[right] == '1')
                --right;
        }

        if (v.size() > 0)
        {
            sort(v.begin(), v.end());
            cout << "1\n"
                 << v.size();
            for (long p = 0; p < v.size(); p++)
                cout << " " << (1 + v[p]);
            cout << endl;
        }
        else
            cout << "0" << endl;
    }
}
