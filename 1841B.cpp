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
        long first;
        cin >> first;
        printf("1");
        long cur(first);
        bool drop(false);
        for (long p = 1; p < n; p++)
        {
            long x;
            cin >> x;
            if (!drop && x >= cur)
            {
                printf("1");
                cur = x;
            }
            else if (!drop)
            {
                if (x <= first)
                {
                    printf("1");
                    drop = true;
                    cur = x;
                }
                else
                {
                    printf("0");
                }
            }
            else if (drop)
            {
                if (cur <= x && x <= first)
                {
                    printf("1");
                    cur = x;
                }
                else
                {
                    printf("0");
                }
            }
        }

        puts("");
    }
}