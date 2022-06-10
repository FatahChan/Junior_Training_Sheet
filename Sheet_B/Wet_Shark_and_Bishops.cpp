#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    FastIO();
    int n, x, y, count = 0;
    cin >> n;
    unordered_map<int, int> mainDig, altDig;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        if (mainDig.find(x - y) == mainDig.end()) {
            mainDig[x - y] = 0;
        }
        if (altDig.find(x - y) == altDig.end()) {
            altDig[x - y] = 0;
        }
        count += mainDig[x - y] + altDig[x + y];
        mainDig[x - y]++;
        altDig[x + y]++;
    }
    cout << count;



//    for (int i = 0; i < n; ++i) {

//        cin >> positions[i].first;
//        cin >> positions[i].second;
//    }
//    int count = 0;
//    for (int i = 0; i < n - 1; ++i) {
//        for (int j = i + 1; j < n; ++j) {
//            int difX = abs(positions[i].first - positions[j].first);
//            int difY = abs(positions[i].second - positions[j].second);
//            if( difX == difY){
//                count++;
//            }
//        }
//    }
//    cout << count;
}
