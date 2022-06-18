#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    int n, l;
    cin >> n >> l;
    double d = 0;
    vector<double> lanterns(n);
    for (int i = 0; i < n; ++i) {
        cin >> lanterns[i];
    }
    std::sort(lanterns.begin(), lanterns.end());
    d = lanterns[0];
    for (int i = 0; i < n - 1; ++i) {
        double tempD = (lanterns[i + 1] - lanterns[i]) / 2;
        d = max(d, tempD);
    }
    d = max(d, l - lanterns[n - 1]);

    cout << setprecision(9) << fixed << d;
}
