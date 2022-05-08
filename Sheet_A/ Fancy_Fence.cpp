#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    int t, a;
    cin >> t;
    while (t--) {
        cin >> a;
        cout << (360 % (180 - a) == 0 ? "YES" : "NO") << endl;
    }
}
