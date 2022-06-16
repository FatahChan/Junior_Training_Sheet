#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

struct Point {
    int x;
    int y;

    Point(int _x = 0, int _y = 0) {
        x = _x;
        y = _y;
    }


};

// Given three collinear points p, q, r, the function checks if
// point q lies on line segment 'pr'
bool onSegment(Point p, Point q, Point r) {
    if ((q.x == p.x && q.y == p.y) || (q.x == r.x && q.y == r.y)) return true;
    double slope = double(p.y - q.y) / double(p.x - q.x);
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y) && (slope == 1 || slope == -1))
        return true;
    return false;


}


int main() {
    FastIO();
    // n d
    int n, d, m;
    cin >> n >> d >> m;
    vector<Point> high, low;
    high.emplace_back(n - d, n);
    low.emplace_back(0, d);

    for (int i = 0; true; ++i) {
        Point p1 = {(i & 1 ? high.back().x + 1 : high.back().x), (i & 1 ? high.back().y : high.back().y - 1)};
        Point p2 = {(i & 1 ? low.back().x : low.back().x + 1), (i & 1 ? low.back().y - 1 : low.back().y)};
        if (p1.x == n && p1.y == n - d) break;
        high.push_back(p1);
        low.push_back(p2);
    }
    high.emplace_back(n, n - d);
    low.emplace_back(d, 0);
    Point compare;
    for (int i = 0; i < m; ++i) {
        cin >> compare.x >> compare.y;
        bool inside = false;
        for (int j = 0; j < high.size(); ++j) {
            if (onSegment(high[j], compare, low[j])) {
                inside = true;
                break;
            }
        }
        cout << (inside ? "Yes\n" : "No\n");
    }
    // (n−d,n)  ,         (n,n−d)
    // (0,d)    ,         (d,0)
}
