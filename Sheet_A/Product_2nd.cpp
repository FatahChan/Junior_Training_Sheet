#include <bits/stdc++.h>

using namespace std;


inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    FastIO();
    string s1, s2;
    while (cin >> s1) {
        cin >> s2;
        vector<int> a(600, 0);
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        for (int i = 0; i < s1.length(); ++i) {
            for (int j = 0; j < s2.length(); ++j) {
                a[i + j] += (s1[i] - '0') * (s2[j] - '0');

            }
        }
        for (int i = 0; i < 599; ++i) {
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
        int pos = 599;
        while (pos > 0 && a[pos] == 0) pos--;
        for (; pos >= 0; pos--) {
            cout << a[pos];
        }
        cout << endl;


    }
}
