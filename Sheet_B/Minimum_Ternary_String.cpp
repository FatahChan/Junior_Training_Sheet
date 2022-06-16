#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


int main() {
    FastIO();
    string s;
    cin >> s;
    vector<pair<char, int>> str;
    for (char &i: s) {
        if (str.empty() || str.back().first != i) {
            str.emplace_back(i, 1);
            continue;
        }
        str.back().second++;
    }
    string answer = "";
    for (int k = 0; k < 5; ++k) {
        for (int i = 0; i < str.size(); ++i) {
            if (str[i].first == '2') {
                if (i < str.size() - 2 && str[i + 1].first == '0' && str[i + 2].first == '1') {
                    swap(str[i + 1], str[i + 2]);
                    swap(str[i], str[i + 1]);
                    if (i + 2 < str.size() - 1 && str[i + 3].first == '0') {
                        str[i + 2].second += str[i + 3].second;
                        str.erase(str.begin() + (i + 3));
                    }
                    if (i != 0 && str[i - 1].first == '1') {
                        str[i - 1].second += str[i].second;
                        str.erase(str.begin() + i);
                    }
                } else if (i < str.size() - 1 && str[i + 1].first == '1') {
                    swap(str[i], str[i + 1]);
                    if (i + 2 < str.size() && str[i + 2].first == '2') {
                        str[i + 1].second += str[i + 2].second;
                        str.erase(str.begin() + (i + 2));
                    }
                    if (i != 0 && str[i - 1].first == '1') {
                        str[i - 1].second += str[i].second;
                        str.erase(str.begin() + i);
                        i--;
                    }

                }
            } else if (str[i].first == '1' && i < str.size() - 1) {
                if (str[i + 1].first == '0') {
                    swap(str[i], str[i + 1]);
                    if (i + 2 < str.size() && str[i + 2].first == '1') {
                        str[i + 1].second += str[i + 2].second;
                        str.erase(str.begin() + (i + 2));
                    }
                    if (i != 0 && str[i - 1].first == '0') {
                        str[i - 1].second += str[i].second;
                        str.erase(str.begin() + i);
                        i--;
                    }

                }

            }

        }
    }
    for (int i = 0; i < str.size(); ++i) {
        for (int j = 0; j < str[i].second; ++j) {
            answer += str[i].first;
        }
    }
    cout << answer;
}
