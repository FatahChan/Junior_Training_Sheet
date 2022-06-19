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
    vector<int> act(n);
    for (int i = 0; i < n; ++i) {
        cin >> act[i];
    }
    int rest = 0;
    for (int i = 0; i < n; ++i) {
        if (act[i] == 0) {
            rest++;
        } else if (act[i] == 1) {
            if (i != 0 && act[i - 1] == 1) {
                rest++;
                act[i] = 0;
            }
        } else if (act[i] == 2) {
            if (i != 0 && act[i - 1] == 2) {
                rest++;
                act[i] = 0;
            }
        } else if (act[i] == 3) {
            if (i != 0 && act[i - 1] == 1) {
                act[i] = 2;
            } else if (i != 0 && act[i - 1] == 2) {
                act[i] = 1;
            } else if (i == 0) {
                if (act[i + 1] == 1) {
                    act[i] = 2;
                } else if (act[i + 1] == 2) {
                    act[i] = 1;
                }
                int k = -1, a = 0;
                for (int j = 1; j < n; ++j) {
                    if (act[j] == 1 || act[j] == 2) {
                        k = j;
                        a = act[j];
                    }
                }
                if (k != -1) {
                    if (k % 2 == 0) {
                        act[i] = a;
                    } else {
                        act[i] = (a == 1 ? 2 : 1);
                    }
                } else {
                    act[i] = 1;
                }
            }
        }
    }
    cout << rest;

}
