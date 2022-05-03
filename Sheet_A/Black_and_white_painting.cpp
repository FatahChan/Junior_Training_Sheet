#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    FastIO();
    int row, col, c;
    cin >> row >> col >> c;
    while (row) {
        cout << (((row - 7) * (col - 7)) + c) / 2 << "\n";
        cin >> row >> col >> c;
    }
}
