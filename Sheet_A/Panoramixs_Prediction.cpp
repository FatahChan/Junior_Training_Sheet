#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here

    int n, m;
    cin >> n >> m;
    vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    auto posN = find(prime.begin(), prime.end(), n);
    posN++;
    if (*posN == m) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

