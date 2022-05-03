#include <bits/stdc++.h>

using namespace std;

bool does_not_exceed(string s, char k) {
    sort(s.begin(), s.end());
    auto it = unique(s.begin(), s.end());
    s.resize(distance(s.begin(), it));
    for (char i = '0'; i <= k; ++i) {
        if (s.find(i) == string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    int n, ans = 0;
    char k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        if (does_not_exceed(temp, k)) ans++;
    }
    cout << ans;
    return 0;
}


