#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

enum treeStatus {
    l, r, s
};


struct tree {
    int64_t pos, height;
    treeStatus status = s;

};

int main() {
    FastIO();
    int n;
    cin >> n;
    vector<tree> trees(n);

    for (int i = 0; i < n; ++i) {
        cin >> trees[i].pos >> trees[i].height;
    }
    int count = 1;
    if (n >= 2) {
        trees[0].status = l;
        trees[n - 1].status = r;
        count = 2;
    }
    for (int i = 1; i < n - 1; ++i) {
        if (((trees[i - 1].status == s || trees[i - 1].status == l) &&
             (trees[i].pos - trees[i].height > trees[i - 1].pos))
            ||
            ((trees[i - 1].status == r) && (trees[i].pos - trees[i].height > trees[i - 1].pos + trees[i - 1].height))) {
            count++;
            trees[i].status = l;
        } else if (trees[i].pos + trees[i].height < trees[i + 1].pos) {
            count++;
            trees[i].status = r;
        }
    }
    cout << count;
}
