#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char flag = 'A';
        for (int i = 0; i < 3; i++)
        {
            string s;
            cin >> s;
            bool a = false;
            bool b = false;
            bool c = false;
            for (int j = 0; j < 3; j++)
            {
                if (s[j] == 'A')
                    a = true;
                else if (s[j] == 'B')
                    b = true;
                else if(s[j]=='C')
                    c = true;
            }
            if (!a)
                flag = 'A';
            else if (!b)
                flag = 'B';
            else if (!c)
                flag = 'C';
        }
        cout << flag << endl;
    }
}