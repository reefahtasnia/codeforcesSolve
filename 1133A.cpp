#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t; 
    cin >> s >> t;
    int h1, m1, h2, m2; 
    h1 = 10 * (s[0] - '0') + (s[1] - '0');
    m1 = 10 * (s[3] - '0') + (s[4] - '0');
    h2 = 10 * (t[0] - '0') + (t[1] - '0');
    m2 = 10 * (t[3] - '0') + (t[4] - '0');

    int dur = 60 * (h2 - h1) + (m2 - m1); dur /= 2;
    m1 += dur; h1 += (m1 / 60); m1 %= 60;
    cout <<  h1 / 10 << h1 % 10 << ":" << m1 / 10 << m1 % 10 << endl;

    return 0;
}