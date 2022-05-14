#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    int t;
    int x1l, y1l, x1u, y1u;
    int x2l, y2l, x2u, y2u;
    int xol, yol, xou, you;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> x1l >> y1l >> x1u >> y1u;
        cin >> x2l >> y2l >> x2u >> y2u;

        xol = max(x1l, x2l);
        yol = max(y1l, y2l);
        xou = min(x1u, x2u);
        you = min(y1u, y2u);
        if (i > 0) cout << "\n";
        if (xol < xou && yol < you) {
            cout << xol << " " << yol << " " << xou << " " << you << "\n";
        } else {
            cout << "No Overlap\n";
        }

    }
}
