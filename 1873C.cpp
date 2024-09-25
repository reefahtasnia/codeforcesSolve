#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<string> v;
        string s;
        for(int i=0;i<10;i++){
            cin>>s;
            v.push_back(s);
        }
        vector<int>point;
        for(int i=0; i<10; ++i)
        {
            for(int j=0; j<10; ++j)
            {
                if(v[i][j]=='X')
                {   
                    set<int>st;
                    st.insert(i);
                    st.insert(j);
                    st.insert(9-i);
                    st.insert(9-j);
                    auto it=*st.begin();
                    point.push_back(it);
                }
            }   
        }
        int points=0;
        for(auto x:point)
        {
            points=points+x+1;
        }
        cout<<points<<endl;
    }
}