#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    string ss;
    cin >> ss;
    if (ss == "1") {
        cout << "0";
        return 0;
    }
    if (ss.size() % 2 != 0 && ss.substr(1, ss.size() - 1).find("1") == string::npos) {
        cout << ss.substr(1, ss.size() - 1).size() / 2;

    } else {
        cout << ss.substr(1, ss.size() - 1).size() / 2 + 1;
    }
    return 0;
}


