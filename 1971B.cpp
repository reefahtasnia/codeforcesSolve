#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s; 
		cin >> s; 
		if(count(begin(s), end(s), s[0]) == s.size()) cout << "NO\n";
		else{
			for(int i = 1; i < s.size(); ++i){
				if(s[0] != s[i]){
					swap(s[0], s[i]);
					break;
				}
			}
			cout << "YES\n";
			cout << s << endl;
		}
    }

    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool can_rearrange = false;
        for (int i = s.length() - 2; i >= 0; i--) {
            if (s[i] < s[i + 1]) {
                can_rearrange = true;
                int j = s.length() - 1;
                while (j > i && s[j] <= s[i]) {
                    j--;
                }
                swap(s[i], s[j]);
                reverse(s.begin() + i + 1, s.end());
                break;
            }
        }
        if (can_rearrange) {
            cout << "YES" << endl;
            cout << s << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}*/