#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    int n, t;
    cin >> n >> t;
    string answer;
    if (t != 10) {
        answer.insert(answer.begin(), n, (char) t + '0');
    } else {
        if (n > 1) {
            answer.insert(answer.begin(), n - 1, '0');
            answer.insert(answer.begin(), 1, '1');
        } else {
            answer = "-1";
        }
    }
    cout << answer;
    return 0;
}


