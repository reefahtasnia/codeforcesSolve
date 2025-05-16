#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //use a map to track all unique reachable numbers
    //can solve this problem without any data structures
    map<int, bool> mp;
    while(!mp[n])
    {
        mp[n] = true; //mark this number as reachable
        n++; //add 1 like the function f(x)
        while(n % 10 == 0)  //remove trailing zero
            n /= 10;
    }
    cout << (int)mp.size()<<endl; //only true values in map so size = count of unique numbers
    return 0;
}