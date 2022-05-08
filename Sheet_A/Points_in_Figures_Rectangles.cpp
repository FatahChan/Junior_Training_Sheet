#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    char type;
    vector<vector<float>> rects;
    while (cin >> type, type == 'r') {
        vector<float> vec(4, 0);
        cin >> vec[0] >> vec[1] >> vec[2] >> vec[3];
        rects.push_back(vec);
    }
    float x, y, p = 0;
    while (cin >> x >> y, x < 9999.9 || y < 9999.9) {
        p++;
        bool contained = false;
        for (int i = 0; i < rects.size(); ++i) {
            if (
                    x > rects[i][0] &&
                    x < rects[i][2] &&
                    y < rects[i][1] &&
                    y > rects[i][3]
                    ) {
                cout << "Point " << p << " is contained in figure " << i + 1 << "\n";
                contained = true;
            }
        }
        if (!contained) {
            cout << "Point " << p << " is not contained in any figure\n";
        }
    }

}
