#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


inline int coord2int(int n, int x, int y) {

    return (x * n) + y;
}

void DFSUtill(int i, unordered_map<int, bool> &visited, unordered_map<int, set<int>> &graph) {
    visited[i] = true;
    for (int j: graph[i]) {
        if (!visited[j]) {
            DFSUtill(j, visited, graph);
        }
    }
}

int connectedComponents(unordered_map<int, set<int>> &graph, int &nodes) {
    int count = 0;
    unordered_map<int, bool> visited;
    for (auto &i: graph) {
        visited[i.first] = false;
    }
    for (auto &i: graph) {
        if (!visited[i.first]) {
            DFSUtill(i.first, visited, graph);
            count++;
        }
    }
    return count;
}


int main() {
    FastIO();
    int n, c = 0;
    while (cin >> n) {
        c++;
        int nodes = 0;
        unordered_map<int, set<int>> graph;
        vector<string> matrix(n);
        for (int i = 0; i < n; ++i) {
            cin >> matrix[i];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == '1') {
                    if (i != 0) {
                        if (matrix[i - 1][j] == '1') {
                            graph[coord2int(n, i, j)].insert(coord2int(n, i - 1, j));
                            graph[coord2int(n, i - 1, j)].insert(coord2int(n, i, j));
                        }
                        if (j != 0 && matrix[i - 1][j - 1] == '1') {
                            graph[coord2int(n, i, j)].insert(coord2int(n, i - 1, j - 1));
                            graph[coord2int(n, i - 1, j - 1)].insert(coord2int(n, i, j));

                        }
                        if (j != n - 1 && matrix[i - 1][j + 1] == '1') {
                            graph[coord2int(n, i, j)].insert(coord2int(n, i - 1, j + 1));
                            graph[coord2int(n, i - 1, j + 1)].insert(coord2int(n, i, j));
                        }
                    }
                    if (i != n - 1) {
                        if (matrix[i + 1][j] == '1') {
                            graph[coord2int(n, i, j)].insert(coord2int(n, i + 1, j));
                            graph[coord2int(n, i + 1, j)].insert(coord2int(n, i, j));
                        }
                        if (j != 0 && matrix[i + 1][j - 1] == '1') {
                            graph[coord2int(n, i, j)].insert(coord2int(n, i + 1, j - 1));
                            graph[coord2int(n, i + 1, j - 1)].insert(coord2int(n, i, j));

                        }
                        if (j != n - 1 && matrix[i + 1][j + 1] == '1') {
                            graph[coord2int(n, i, j)].insert(coord2int(n, i + 1, j + 1));
                            graph[coord2int(n, i + 1, j + 1)].insert(coord2int(n, i, j));
                        }
                    }
                    if (j != 0 && matrix[i][j - 1] == '1') {
                        graph[coord2int(n, i, j)].insert(coord2int(n, i, j - 1));
                        graph[coord2int(n, i, j - 1)].insert(coord2int(n, i, j));
                    }
                    if (j != n - 1 && matrix[i][j + 1] == '1') {
                        graph[coord2int(n, i, j)].insert(coord2int(n, i, j + 1));
                        graph[coord2int(n, i, j + 1)].insert(coord2int(n, i, j));
                    }
                    graph[coord2int(n, i, j)];
                    nodes++;
                }
            }
        }
        cout << "Image number " << c << " contains " << connectedComponents(graph, nodes) << " war eagles.\n";
    }

}
