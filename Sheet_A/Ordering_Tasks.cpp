#include <bits/stdc++.h>
using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
void topSort(int src, vector<vector<int>> &adjList, vector<bool> &visited, vector<int> &answer) {
    visited[src] = true;
    for (int i : adjList[src]) {
        if(!visited[i]) topSort(i, adjList, visited, answer);
    }
    answer.push_back(src);
}

int main() {
    FastIO();
    int n, m;
    while (cin >> n >> m, n!=0 || m!= 0){
        vector<vector<int>> adjList(n+1);
        stack<int> st;
        for (int i = 0; i < m; ++i) {
            int x, y;
            cin >> x >> y;
            adjList[x].push_back(y);
        }
        vector<int> answer;
        vector<bool> visited(n+1, false);
        for (int i = 1; i <= n; ++i) {
            if(!visited[i]) topSort(i, adjList, visited, answer);
        }
        for (int i = n-1; i >= 0; --i) {
            if(i != n-1) cout << ' ';
            cout << answer[i];
        }
        cout << "\n";
    }
}


