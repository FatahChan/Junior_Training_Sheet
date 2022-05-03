#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void add(string &answer, int &c, int &r, int &p1, int &p2) {
    int curr_pos = answer.size() - (p1 + p2 - 2) - 1;
    if (curr_pos == -1) {
        curr_pos = 0;
    }
    int n1 = answer[curr_pos] - '0';
    int n2 = r;
    int carry = 0;
    do {
        int a = n1 + n2;
        if (a <= 9) {
            answer[curr_pos] = to_string(a)[0];
            carry = 0;
        } else {
            carry = a / 10;
            answer[curr_pos] = to_string(a % 10)[0];
            n1 = carry;
            curr_pos--;
            if (curr_pos == -1) {
                answer = "0" + answer;
                curr_pos = 0;
            }
            n2 = answer[curr_pos] - '0';
        }

    } while (carry != 0);

    curr_pos = answer.size() - (p1 + p2 - 1) - 1;
    if (curr_pos == -1) {
        answer = "0" + answer;
        curr_pos = 0;
    }
    n1 = c;
    n2 = answer[curr_pos] - '0';
    do {
        int a = n1 + n2;
        if (a <= 9) {
            answer[curr_pos] = to_string(a)[0];
            carry = 0;
        } else {
            carry = a / 10;
            answer[curr_pos] = to_string(a % 10)[0];
            n1 = carry;
            curr_pos--;
            if (curr_pos == -1) {
                answer = "0" + answer;
                curr_pos = 0;
            }
            n2 = answer[curr_pos] - '0';
        }

    } while (carry != 0);


}


int main() {
    FastIO();
    while (true) {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.size() > s2.size()) {
            swap(s1, s2);
        }
        int s1_size = s1.size();
        int s2_size = s2.size();
        string answer;
        for (int i = 0; i < s1_size; ++i) {
            for (int j = 0; j < s2_size; ++j) {
                int p1 = i + 1;
                int p2 = j + 1;
                int n1 = s1[s1_size - i - 1] - '0';
                int n2 = s2[s2_size - j - 1] - '0';
                int c = (n1 * n2) / 10;
                int r = (n1 * n2) % 10;
                if (answer.empty()) {
                    answer = to_string(c) + to_string(r);
                } else {
                    add(answer, c, r, p1, p2);
                }
            }
        }
        while (answer[0] == '0') {
            answer.erase(0, 1);
        }
        cout << answer << "\n";
    }
}
