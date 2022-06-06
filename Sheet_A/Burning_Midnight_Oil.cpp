#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

inline int calculate_mid(int &l, int &h) {
    return l + (h - l) / 2;
}

inline int log_a_to_base_b(int a, int b) {
    return log2(a) / log2(b);
}

inline int calculate_x(double v, double k, double t) {
    int sum = 0;
    for (int i = 0; i <= t; ++i) {
        sum += v * 1 / (pow(k, i));
    }
    return sum;
}

int main() {
    FastIO();
    int n, k, v = 1;

    cin >> n >> k;
    if (n < k) v = n;
    int low = 1, high = n - 1;
    while (low <= high) {
        int v_temp, t, x;
        v_temp = calculate_mid(low, high);
        t = log_a_to_base_b(v_temp, k);
        x = calculate_x(v_temp, k, t);
        if (x >= n) {
            high = v_temp - 1;
            v = v_temp;
        } else {
            low = v_temp + 1;
        }
    }
    cout << v;


}
