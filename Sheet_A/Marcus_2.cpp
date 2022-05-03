#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> m >> n;
        char temp;
        string find = "@IEHOVA#";
        unordered_map<char, pair<int, int>> charPos;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> temp;
                if (find.find(temp) != std::string::npos) {
                    charPos[temp] = make_pair(i, j);
                }
            }
        }

        int pos[2][3] = {{-1, 0,  0},
                         {0,  -1, 1}};
        string dir[] = {"forth", "left", "right"};
        string answers[7];
        for (int i = 0; i < 7; ++i) {
            int dx = charPos[find[i + 1]].first - charPos[find[i]].first;
            int dy = charPos[find[i + 1]].second - charPos[find[i]].second;
            for (int j = 0; j < 3; ++j) {
                if (dx == pos[0][j] && dy == pos[1][j]) {
                    answers[i] = (dir[j]);
                    break;
                }
            }
        }
        cout << answers[0];
        for (int i = 1; i < 7; ++i) {
            cout << " " << answers[i];
        }
        cout << endl;

    }
}
