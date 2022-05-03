#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    string x;
    cin >> x;
    for (int i = x.size() - 1; i >= 0; --i) {
        if (x[i] > '4') {
            if (i == 0 && x[i] == '9') continue;
            if (x.size() == 1 && x[i] == '9') continue;
            x[i] = '9' - x[i] + '0';
        }
    }
    cout << x;
    return 0;
}


