#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    char ch = '#';
    int f = 0;
    for (int i = 1; i <= n; ++i)
    {
      for (int j = 1; j <= 2; ++j)
      {
        char tm = ch;
        for (int k = 1; k <= n; ++k)
        {
          cout << ch << ch;
          if (ch == '#')
            ch = '.';
          else
            ch = '#';
        }
        cout << endl;
        ch = tm;
      }
      if (f % 2 == 0)
        ch = '.';
      else
        ch = '#';
      ++f;
    }
  }
}