#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    map<string,string> old;
    cin >> q;
    while(q--)
    {
        string a,b;
        //a=old handle and b=new handle
        cin >> a >> b;
        if (old.count(a)==0) old[a]=a;    
        //if old handle isnt in map, its an original handle. so we map the old handle to itself

        old[b] = old[a]; //map the new handle to the old handle
        old.erase(a); //remove the old handle from the map, since it has been changed
    }
    cout << old.size() << endl;

    for (auto kv : old)
        cout << kv.second << "  " << kv.first << endl;
    
    return 0;
}