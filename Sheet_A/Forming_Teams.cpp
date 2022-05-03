#include <bits/stdc++.h>

using namespace std;

int dfs_cycle(map<int, vector<int>> &archenemies) {
    int removed = 0;
    for (auto j: archenemies) {
        stack<int> stack;
        stack.push(j.first);
        int count = 1;

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here

    map<int, vector<int>> archenemies;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        archenemies[u].push_back(v);
        archenemies[v].push_back(u);
    }


    return 0;
}


