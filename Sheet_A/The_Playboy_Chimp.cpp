#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    int64_t n, q, temp;
    set<int64_t> lady;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        lady.insert(temp);
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> temp;
        auto lower = lady.lower_bound(temp);
        auto upper = lady.upper_bound(temp);
        if (lower == lady.begin()) {
            cout << "X ";
        } else {
            cout << *(--lower) << " ";
        }

        if (upper == lady.end()) {
            cout << "X\n";
        } else {
            cout << *upper << "\n";
        }


    }
}
