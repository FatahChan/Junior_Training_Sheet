#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

inline int64_t sum(int64_t k) {
    return k * (k + 1) / 2;
}

inline int64_t sum(int64_t l, int64_t r) {
    return sum(r) - sum(l - 1);
}

inline int64_t search(int64_t n, int64_t k) {
    int64_t left = 1, right = k, mid, s;
    while (left < right) {
        mid = left + (right - left) / 2;
        s = sum(mid, k);
        if (s == n) {
            return k - mid + 1;
        } else if (s > n) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return k - left + 2;
}


int main() {
    FastIO();
    int64_t n, k;
    cin >> n >> k;
    int64_t max_outlet = sum(k - 1) + 1;


    if (n == 1) {
        cout << 0;
    } else if (n <= k) {
        cout << 1;
    } else if (n == max_outlet) {
        cout << k - 1;
    } else if (n > max_outlet) {
        cout << -1;
    } else {
        n -= 1;
        k -= 1;
        cout << search(n, k);
    }


}