#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    int n, m;
    cin >> n;
    vector<int64_t> stones(n + 1), sortedStones(n + 1);
    stones[0] = 0;
    sortedStones[0] = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> stones[i];
        sortedStones[i] = stones[i];
    }
    sort(sortedStones.begin(), sortedStones.end());
    for (int i = 1; i <= n; ++i) {
        stones[i] += stones[i - 1];
        sortedStones[i] += sortedStones[i - 1];
    }

    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1) {
            cout << stones[r] - stones[l - 1] << "\n";
        } else {
            cout << sortedStones[r] - sortedStones[l - 1] << "\n";
        }

    }

}
