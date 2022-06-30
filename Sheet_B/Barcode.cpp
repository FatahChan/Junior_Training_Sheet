#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    //solve the following problem:
    /*You've got an n × m pixel picture. Each pixel can be white or black. Your task is to change the colors of as few pixels as possible to obtain a barcode picture.
      A picture is a barcode if the following conditions are fulfilled:

        All pixels in each column are of the same color.
        The width of each monochrome vertical line is at least x and at most y pixels. In other words, if we group all neighbouring columns of the pixels with equal color, the size of each group can not be less than x or greater than y.
        */
    /*
    input: 6 5 1 2
             ##.#.
             .###.
             ###..
             #...#
             .##.#
             ###..
   oputput: 11
   */
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int64_t> blackSum(m + 1), whiteSum(m + 1);
    blackSum[0] = whiteSum[0] = 0;
    for (int i = 1; i <= n; ++i) {
        int black = 0, white = 0;
        for (int j = 1; j <= m; ++j) {
            char c;
            cin >> c;
            if (c == '#') {
                black++;
                blackSum[j] += black;
                whiteSum[j] += white;
            } else {
                white++;
                blackSum[j] += black;
                whiteSum[j] += white;
            }
        }
    }
    vector<vector<int64_t>> dp(2, vector<int64_t>(m + 1, INT32_MAX));
    dp[0][0] = 0;
    dp[1][0] = 0;
    for (int i = 1; i <= m; ++i) {
        int64_t min1 = INT32_MAX, min2 = INT32_MAX;
        for (int j = x; j <= y && i >= j; ++j) {
            min1 = min(min1, dp[1][i - j] + blackSum[i] - blackSum[i - j]);
            min2 = min(min2, dp[0][i - j] + whiteSum[i] - whiteSum[i - j]);
        }
        dp[0][i] = min1;
        dp[1][i] = min2;
    }

    cout << min(dp[0][m], dp[1][m]);


}
