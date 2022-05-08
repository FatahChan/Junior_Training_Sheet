#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


inline double dis(pair<double, double> a, pair<double, double> b) {
    return sqrt(pow(b.first - a.first, 2) + pow(b.second - a.second, 2));
}

int main() {
    FastIO();
    double n, k;
    cin >> n >> k;
    vector<pair<double, double>> points(n, pair<double, double>(0, 0));
    for (int i = 0; i < n; ++i) {
        cin >> points[i].first;
        cin >> points[i].second;
    }
    double length = 0;
    for (int i = 1; i < n; ++i) {
        length += dis(points[i], points[i - 1]);
    }
    cout << fixed << setprecision(9) << (length / 50) * k;
}
