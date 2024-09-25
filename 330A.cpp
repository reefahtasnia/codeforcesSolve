#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    map<int, bool> row_map, col_map;
    vector<string> grid(r);

    for (int i = 0; i < r; ++i) {
        cin >> grid[i];
        for (int j = 0; j < c; ++j) {
            if (grid[i][j] == 'S') {
                row_map[i] = true;
                col_map[j] = true;
            }
        }
    }

    int cakes = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (!row_map[i] || !col_map[j]) {
                ++cakes;
            }
        }
    }

    cout << cakes << endl;
    return 0;
}