#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    string a, b;
    cin >> a >> b;
    vector<int> bPrefixSumOfOnes(b.size(), 0), bPrefixSumOfZeros(b.size(), 0);
    bPrefixSumOfOnes[0] = b[0] == '1' ? 1 : 0;
    bPrefixSumOfZeros[0] = b[0] == '0' ? 1 : 0;
    for (int i = 1; i < b.size(); ++i) {
        bPrefixSumOfOnes[i] += bPrefixSumOfOnes[i - 1] + (b[i] == '1' ? 1 : 0);
        bPrefixSumOfZeros[i] += bPrefixSumOfZeros[i - 1] + (b[i] == '0' ? 1 : 0);
    }
    int64_t dis = 0;
    if (a[0] == '1') {
        dis += bPrefixSumOfZeros[b.size() - a.size()];
    } else {
        dis += bPrefixSumOfOnes[b.size() - a.size()];
    }
    for (int i = 1; i < a.size(); ++i) {
        if (a[i] == '1') {
            dis += bPrefixSumOfZeros[b.size() - a.size() + i] - bPrefixSumOfZeros[i - 1];
        } else {
            dis += bPrefixSumOfOnes[b.size() - a.size() + i] - bPrefixSumOfOnes[i - 1];
        }
    }
    cout << dis;

}
