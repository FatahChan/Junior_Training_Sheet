#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool possibleMinDis(vector<int64_t> &stalls, int64_t dis, int64_t &c) {
    int64_t housed = 1, lastHoused = 0;
    for (int i = 1; i < stalls.size() && housed != c; ++i) {
        if (stalls[i] >= stalls[lastHoused] + dis) {
            housed++;
            lastHoused = i;
        }
    }
    if (housed == c) {
        return true;
    } else {
        return false;
    }
}


int64_t findMinDis(vector<int64_t> &stalls, int64_t &n, int64_t &c, int64_t left, int64_t right) {
    int64_t mid, answer = -1;
    while (left <= right) {
        mid = left + (right - left) / 2;
        bool possible = possibleMinDis(stalls, mid, c);
        if (possible) {
            answer = max(answer, mid);
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return answer;


}

int main() {
    FastIO();
    int64_t t, n, c;
    cin >> t;
    while (t--) {
        cin >> n >> c;
        vector<int64_t> stalls(n);
        for (int i = 0; i < n; ++i) {
            cin >> stalls[i];
        }
        std::sort(stalls.begin(), stalls.end());
        cout << findMinDis(stalls, n, c, 0, stalls[n - 1]) << '\n';
    }

}
