#include <bits/stdc++.h>


using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


void DFS(int src,vector<set<int>> &undirectedAdjList, vector<bool> &visited, set<int> &set) {
    visited[src] = true;
    set.insert(src);
    for (int i : undirectedAdjList[src]) {
        if(!visited[i]) DFS(i, undirectedAdjList, visited, set);
    }
}

vector<set<int>> connected_directed_graph(vector<set<int>> &undirectedAdjList, int n){
    vector<set<int>> connected_graphs;
    vector<bool> visited(n+1, false);
    for (int i = 1; i <= n; ++i) {
        if(!visited[i]){
            set<int> s;
            DFS(i, undirectedAdjList, visited, s);
            connected_graphs.push_back(s);
        }
    }
    return connected_graphs;
}


void topological_sort(int v, stack<int> &stack, unordered_map<int, bool> &visited, vector<set<int>> &undirected_graph){
    visited[v] = true;
    for (int i : undirected_graph[v]) {
        if(!visited[i]) topological_sort(i, stack, visited, undirected_graph);
    }
    stack.push(v);
}

void build_hierarchy(set<int> &s, int &mainBoss, vector<int> &bosses, vector<set<int>> &directed_graph, int k){
    unordered_map<int, bool> visited;
    for (int i: s) {
        visited[i] = false;
    }
    stack<int> stack;
    for (int i: s) {
        if (!visited[i]) {
            topological_sort(i, stack, visited, directed_graph);
        }
    }




    int lastBoss = stack.top();
    if(mainBoss == 0){
        mainBoss = stack.top();
        bosses[stack.top()] = 0;
    }else{
        bosses[stack.top()] = mainBoss;
    }
    stack.pop();
    while (!stack.empty()){
        bosses[stack.top()] = lastBoss;
        if(stack.top() <= k ){
            lastBoss = stack.top();
        }
        stack.pop();
    }
}

int main() {
    FastIO();
    int n, k, x, y;
    cin >> n >> k;
    vector<set<int>> directed_graph(n+1), undirected_graph(n+1);
    vector<int> bosses(n+1);
    int mainBoss = 0;
    for (int i = 1; i <= k; ++i) {
        cin >> x;
        for (int j = 0; j < x; ++j) {
            cin >> y;
            directed_graph[i].insert(y);
            undirected_graph[i].insert(y);
            undirected_graph[y].insert(i);
        }
    }
    vector<set<int>> CDG =  connected_directed_graph(undirected_graph,n);
    for (auto s: CDG) {
        build_hierarchy(s, mainBoss, bosses, directed_graph, k);
    }
    for (int i = 1; i <= n; ++i) {
        cout << bosses[i] << endl;
    }


}
