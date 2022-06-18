#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    int64_t l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    for (int64_t i = l; i < r; i += 2) {
        cout << i << " " << i + 1 << "\n";
    }
}
