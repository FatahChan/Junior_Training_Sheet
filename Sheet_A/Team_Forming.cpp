#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

enum Color {
    RED, BLUE, noColor
};


void removeNode(vector<unordered_set<short>> &adjMatrix, vector<short> &remove) {
    for (int j: remove) {
        adjMatrix[j].clear();
        for (auto &i: adjMatrix) {
            i.erase(j);
        }
    }

}

short BFS(vector<unordered_set<short>> &adjMatrix, vector<Color> &colors) {
    short answer = 0;
    auto n = short(adjMatrix.size());
    for (short i = 1; i < n; i++) {
        if (adjMatrix[i].empty()
            ||
            colors[i] != noColor)
            continue;
        if (colors[i] == noColor) colors[i] = RED;
        queue<short> q;
        q.push(i);
        while (!q.empty()) {
            short u = q.front();
            vector<short> remove;
            q.pop();
            for (short j: adjMatrix[u]) {
                if (colors[j] == noColor) {
                    colors[j] = (colors[u] == RED ? BLUE : RED);
                    q.push(j);
                } else if (colors[j] == colors[u]) {
                    answer++;
                    remove.push_back(j);
                }
            }
            removeNode(adjMatrix, remove);
        }
    }

    return answer;
}

int main() {
    FastIO();
    int n, m;
    cin >> n >> m;
    vector<unordered_set<short>> adjMatrix(n + 1, unordered_set<short>());
    vector<Color> colors(n + 1, noColor);
    for (int i = 0; i < m; ++i) {
        short x, y;
        cin >> x >> y;
        adjMatrix[x].insert(y);
        adjMatrix[y].insert(x);
    }
    short answer = BFS(adjMatrix, colors);
    cout << ((n - answer) % 2 == 0 ? answer : answer + 1);


}
