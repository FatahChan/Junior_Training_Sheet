#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int i = 0;
    while (true) {

        if (a + (i * b) >= c - (d * i)) {
            cout << (a + (i * b)) << endl;
            break;
        }

        if (a + ((i + 1) * b) >= c - (d * i)) {
            cout << (c - (d * i)) << endl;
            break;
        }
        i++;
    }


}
