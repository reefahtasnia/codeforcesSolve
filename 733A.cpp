#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, len;
    int count = 1, max = 0;
    char s[200];

    cin >> s;
    strcat(s, "A");
    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        {
            // cout<<s[i]<<"  "<<count<<endl;
            if (count > max)
            {
                max = count;
                count = 1;
            }
            else
                count = 1;
        }
        else
            count++;
    }
    cout << max << endl;
    return 0;
}