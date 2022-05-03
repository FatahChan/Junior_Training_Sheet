#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    string s, left = "", right = "", weights;
    cin >> s >> weights;
    int mid = s.find('|');
    left += s.substr(0, mid);
    right += s.substr(mid + 1, s.size() - left.size());
    int dif = abs(((int) left.size() - (int) right.size()));
    while (weights != "") {
        if (left.size() < right.size()) {
            left += weights[0];
            weights.erase(0, 1);
        } else if (left.size() > right.size()) {
            right += weights[0];
            weights.erase(0, 1);
        } else {
            right += weights[0];
            weights.erase(0, 1);
        }
    }
    left.size() == right.size() ? cout << left << "|" << right : cout << "Impossible";
    return 0;
}


