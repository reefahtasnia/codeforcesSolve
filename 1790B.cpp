#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        cout << s - r << " ";
        vector<int> vi;
        int sum=r;
        for (int i = 0; i < (n - 1); i++)
        {
            vi.push_back(r / (n - 1));
            sum=sum-(r / (n - 1));
        }
        while (sum>0)
        {
            sort(vi.begin(), vi.end());
            vi[0]++;
            sum--;
        }
        for(auto i:vi){
            cout<<i<<" ";
        }
        cout << endl;
    }
    return 0;
}