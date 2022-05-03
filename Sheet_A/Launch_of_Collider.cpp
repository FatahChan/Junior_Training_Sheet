#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<long> answersPos, answers;
    for (int i = 0; i < n - 1; ++i) {
        if (s.substr(i, 2) == "RL") {
            answersPos.push_back(i);
        }
    }
    long in, temp;

    for (int i = 0; i < n && answersPos.size() != 0; ++i) {
        cin >> in;
        if (binary_search(answersPos.begin(), answersPos.end(), i)) {
            temp = in;
            cin >> in;
            answers.push_back((in - temp) / 2);
            ++i;
        }
    }
    answers.size() == 0 ? cout << -1 : cout << *min_element(answers.begin(), answers.end());
    return 0;
}


