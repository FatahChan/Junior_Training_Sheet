#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


void dfs(int i, int j, vector<string> &matrix) {
    int n = int(matrix.size());
    if (i < 0 || j < 0 || i >= n || j >= n) return;
    if (matrix[i][j] == '.') return;
    matrix[i][j] = '.';
    dfs(i, j + 1, matrix);
    dfs(i, j - 1, matrix);
    dfs(i - 1, j, matrix);
    dfs(i + 1, j, matrix);

}

int main() {
    FastIO();
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        cin >> n;
        int answer = 0;
        vector<string> matrix(n);
        for (int j = 0; j < n; ++j) {
            cin >> matrix[j];
        }
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (matrix[j][k] == 'x') {
                    answer++;
                    dfs(j, k, matrix);
                }
            }
        }
        cout << "Case " << i << ": " << answer << endl;


    }
}