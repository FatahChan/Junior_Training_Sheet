#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


void DFS(int i, int j, vector<string> &matrix, vector<vector<bool>> &visited, vector<vector<int>> &pos) {
    visited[i][j] = true;
    for (int k = 0; k < pos.size(); ++k) {
        int _i = i + pos[0][k];
        int _j = j + pos[1][k];
        if (!visited[_i][_j] && (matrix[_i][_j] == 'x' || matrix[_i][_j] == '@')) {
            DFS(_i, _j, matrix, visited, pos);
        }
    }
}

int main() {
    FastIO();
    int t, n, c = 1;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<string> matrix(n + 2);
        vector<vector<bool>> visited(n + 2, vector<bool>(n + 2, false));
        matrix[0] = string(n + 2, '.');
        vector<vector<int>> pos = {{-1, 1, 0,  0},
                                   {0,  0, -1, 1}};
        int answer = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> matrix[i];
            matrix[i] = "." + matrix[i] + ".";
        }
        matrix[n + 1] = string(n + 2, '.');
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (!visited[i][j] && matrix[i][j] == 'x' || matrix[i][j] == '@') {
                    DFS(i, j, matrix, visited, pos);
                    answer++;
                }
            }
        }
        cout << "Case " << c << ": " << answer << ((t - 1) ? "" : "\n");
        c++;
    }
}
