#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    int n;
    set<char> rr;
    vector<string> sqr;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        sqr.push_back(temp);
    }

    for (int i = 0; i < n; ++i) {
        if (sqr[i][i] != sqr[i][n - i - 1]) {
            cout << "NO";
            return 0;
        }
        char dif = sqr[0][1];
        int cc = count(sqr[i].begin(), sqr[i].end(), dif);
        if (i != (n / 2)) {
            if (cc != n - 2) {
                cout << "NO";
                return 0;
            }
        } else {
            if (cc != n - 1) {
                cout << "NO";
                return 0;
            }
            if (sqr[0][0] != sqr[n / 2][n / 2]) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}


