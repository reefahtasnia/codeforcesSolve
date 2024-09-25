#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        char a[8][8];
        string ch="";//initialize with this to concatenate smoothly
        //int c=0;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>a[i][j];
                if(a[i][j]!='.' && a[i][j]!=' ' && a[i][j]!='\n')
                {
                    ch+=a[i][j];
                }
            }
        }
        /*for(int i=0;i<strlen(ch);i++)
        {
            cout<<ch[i];
        }
        cout<<endl;*/
        cout<<ch<<"\n";
    }
    return 0;
}