#include <bits/stdc++.h>
#include <math.h>

using namespace std;
#define PI 3.14159265358979323846

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    double d, h, v, e;
    cin >> d >> h >> v >> e;
    double delta = e - ((4 * v) / (PI * d * d));
    if (delta > 0.0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        cout << fixed << setprecision(12) << (h * -1) / delta << "\n";
    }
}
