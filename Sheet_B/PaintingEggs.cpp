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
    int total = 0;
    for (int i = 0; i < n; ++i) {
        int a, g;
        cin >> a >> g;
        if (total + a <= 500) {
            total += a;
            cout << "A";
        } else {
            total -= g;
            cout << "G";
        }
    }


}
