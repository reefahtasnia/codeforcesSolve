#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long count=0; 
        set<long> w;
        for(long p = 0; p < s.size(); p++){
            w.insert(s[p]);
            if(w.size() > 3){
                ++count; 
                w.clear();
                w.insert(s[p]);
            }
        }

        count += (w.size() > 0);
        cout << count << endl;
    }
}