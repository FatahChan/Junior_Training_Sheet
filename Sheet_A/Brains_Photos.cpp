#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    int n, m;
    bool colored = false;
    cin >> n >> m;
    for (int i = 0; i < n * m; ++i) {
        char temp;
        cin >> temp;
        if (temp == 'C' || temp == 'M' || temp == 'Y') {
            colored = true;
            break;
        }
    }
    colored ? cout << "#Color" : cout << "#Black&White";
    return 0;
}


