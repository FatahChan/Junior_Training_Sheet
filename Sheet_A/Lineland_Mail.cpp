#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    int n;
    cin >> n;
    vector<int> cities(n);
    for (int i = 0; i < n; ++i) {
        cin >> cities[i];
    }
    for (int i = 0; i < n; ++i) {
        int maxi = INT32_MIN;
        int min = INT32_MAX;
        if (i - 1 >= 0) min = cities[i] - cities[i - 1];
        if (i + 1 < n && cities[i + 1] - cities[i] < min) min = cities[i + 1] - cities[i];

        maxi = max(cities[i] - cities[0], cities[n - 1] - cities[i]);
        cout << min << " " << maxi << "\n";
    }
}
