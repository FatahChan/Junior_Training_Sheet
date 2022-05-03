#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    int n, k;
    cin >> n >> k;
    vector<int> points;
    for (int i = 0; i < 2 * n + 1; ++i) {
        int temp;
        cin >> temp;
        points.push_back(temp);
    }
    int current_peak = points.size() - 2;
    for (int i = 0; i < k; ++i) {
        if (points[current_peak] - 1 > points[current_peak - 1] &&
            points[current_peak] - 1 > points[current_peak + 1]) {
            points[current_peak]--;
            current_peak -= 2;
        } else {
            i--;
            current_peak -= 2;
        }
    }
    for (auto i: points) {
        cout << i << " ";
    }

    return 0;
}


