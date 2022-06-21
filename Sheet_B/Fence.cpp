#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    int n, k;
    cin >> n >> k;
    vector<int> planks(n + 1);
    planks[0] = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> planks[i];
        planks[i] += planks[i - 1];
    }
    int minPanels = INT32_MAX, minPos;
    for (int i = 1; i <= n - k + 1; ++i) {
        if (minPanels > (planks[i + k - 1] - planks[i - 1])) {
            minPanels = (planks[i + k - 1] - planks[i - 1]);
            minPos = i;
        }

    }

    cout << minPos;

}
