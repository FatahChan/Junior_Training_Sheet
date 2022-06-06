#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    int64_t n, k, m, i, x;
    cin >> n >> k;
    k = min(k, n);
    m = ((k * k) - k) / 2;
    m++;
    i = m - n;
    if (i < 0) {
        cout << -1;
    } else if (i == 0) {
        cout << k - 1;
    } else {
        x = int64_t(sqrt(8 * i - 1)) / 2;
        cout << k - 1 - x;
    }

}
