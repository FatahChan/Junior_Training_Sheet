#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    string s;
    cin >> s;
    int index = 0;
    for (const char &i: s) {
        index = 2 * index + (i == '4' ? 1 : 2);
    }
    cout << index;
}
