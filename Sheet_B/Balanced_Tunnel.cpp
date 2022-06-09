#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    int n, t;
    cin >> n;
    queue<int> enter, exit;
    unordered_set<int> removed;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        enter.push(t);
    }
    for (int i = 0; i < n; ++i) {
        cin >> t;
        exit.push(t);
    }
    int fineCounter = 0;
    while (!enter.empty()) {
        auto curr = enter.front();
        if (removed.find(curr) != removed.end()) {
            enter.pop();
            continue;
        }
        while (!exit.empty()) {
            if (exit.front() != curr) {
                removed.insert(exit.front());
                exit.pop();
                fineCounter++;
            } else {
                enter.pop();
                exit.pop();
                break;
            }
        }
    }
    cout << fineCounter;
}
