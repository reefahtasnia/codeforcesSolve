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
        int hour = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3, 2));

        string period = (hour < 12) ? "AM" : "PM";
        if (hour == 0) {
            hour = 12;
        } else if (hour > 12) {
            hour -= 12;
        }

        cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << " " << period << endl;
    }
}