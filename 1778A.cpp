#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, d = 0, c = 0, s = 0, f = 0;
        cin >> a;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
            cin >> v[i];
        for (int i = 0; i < a; i++)
        {
            if (v[i] == -1)
                c++;
            else if (v[i] == 1)
            {
                d = max(d, c);
                c = 0;
            }
        }
        d = max(d, c);
        if (d == 0)
        {
            for (int i = 0; i < a; i++)
            {
                if (i <= 1)
                    s -= v[i];
                else
                    s += v[i];
            }
        }
        if (d == 1)
        {
            for (int i = 0; i < a; i++)
            {
                if (((v[i] == -1 && v[i + 1] == 1) || (v[i] == 1 && v[i + 1] == -1)) && f == 0)
                {
                    s -= v[i], s -= v[i + 1];
                    i++, f++;
                }
                else
                    s += v[i];
            }
        }
        if (d >= 2)
        {
            for (int i = 0; i < a; i++)
            {
                if (v[i] == -1 && v[i + 1] == -1 && f == 0)
                {
                    f++;
                    s += abs(v[i]), s += abs(v[i + 1]);
                    i++;
                }
                else
                    s += v[i];
            }
        }
        cout << s;
        cout << endl;
    }
    return 0;
}