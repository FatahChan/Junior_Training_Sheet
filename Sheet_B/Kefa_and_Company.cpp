#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


bool pairCompare(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main() {
    FastIO();
    int n, d;
    cin >> n >> d;
    vector<pair<int64_t, int64_t>> friends(n);
    for (int i = 0; i < n; ++i) {
        cin >> friends[i].first;
        cin >> friends[i].second;
    }
    std::sort(friends.begin(), friends.end(), pairCompare);
    vector<int64_t> preSum(n + 2);
    preSum[0] = 0;
    preSum[1] = friends[0].second;
    for (int i = 2; i <= n; ++i) {
        preSum[i] += preSum[i - 1] + friends[i - 1].second;
    }
    int64_t MaxSum = 0;
    for (int i = 0; i < n; ++i) {
        int64_t sum = friends[i].second;
        int left = i, right = n - 1;
        int mid = left + (right - left) / 2;
        while (left <= right) {
            if (friends[mid].first - friends[i].first < d) {
                sum = max(sum, preSum[mid + 1] - preSum[i]);
                left = mid + 1;
            } else {
                right = mid - 1;
            }
            mid = left + (right - left) / 2;
        }
        MaxSum = max(MaxSum, sum);
    }
    cout << MaxSum;
    return 0;
}
