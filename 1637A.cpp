#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        vector<int> vec1;
        vector<int> vec2;
        for (int i = 0; i < a; i++)
        {
            int p;
            cin >> p;
            vec1.push_back(p);
            vec2.push_back(p);
        }
        sort(vec2.begin(), vec2.end());
        if (vec1 == vec2) cout << "NO" << endl;
        else cout << "YES" << endl;
        
    }
}