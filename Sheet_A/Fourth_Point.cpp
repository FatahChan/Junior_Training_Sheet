#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void find_points(vector<pair<double, double>> &points) {
    vector<pair<double, double>> new_points(3, make_pair(0, 0));
    bool found = false;
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (points[i] == points[j]) {
                new_points[2] = points[i];
                points.erase(points.begin() + max(i, j));
                points.erase(points.begin() + min(i, j));
                found = true;
                break;
            }
        }
        if (found) break;
    }
    new_points[0] = points[0];
    new_points[1] = points[1];
    points = new_points;
}


int main() {
    FastIO();
    vector<pair<double, double>> points(4, make_pair(0, 0));
    while (cin >> points[0].first >> points[0].second) {
        for (int i = 1; i < 4; ++i)
            cin >> points[i].first >> points[i].second;

        find_points(points);

        double xa = points[0].first + (points[1].first - points[2].first);
        double ya = points[0].second + (points[1].second - points[2].second);


        cout << fixed << setprecision(3) << xa << " " << ya << "\n";
        points = vector<pair<double, double>>(4, make_pair(0, 0));
    }
}
//The slope of the line is -A/B, which is equal to (y2-y1)/(x2-x1). So A=y1-y2 and B=x2-x1. C=x1*y2-y1*x2.