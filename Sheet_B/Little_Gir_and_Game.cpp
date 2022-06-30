#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

bool isPalindrome(map<char, int> &charCount) {
    int oddCount = 0;
    for (auto &it: charCount) {
        if (it.second % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount <= 1;
}

int oddCountFn(map<char, int> &charCount) {

}

int main() {
    FastIO();
    string s;
    cin >> s;
    map<char, int> charCount;
    for (char &i: s) {
        charCount.find(i) == charCount.end() ? charCount[i] = 1 : charCount[i]++;
    }
    int oddCount = oddCountFn(charCount);
    if (oddCount <= 1 || oddCount % 2 != 0) {
        cout << "First";
    } else if (oddCount % 2 == 0) {
        cout << "Second";
    }


//    string turn = "First";
//    while (!isPalindrome(charCount)) {
//        if (turn == "First") {
//            for (auto &it : charCount) {
//                if (it.second % 2 != 0) {
//                    it.second--;
//                    break;
//                }
//            }
//            turn = "Second";
//        } else {
//            for (auto &it : charCount) {
//                if (it.second % 2 != 0) {
//                    it.second++;
//                    break;
//                }
//            }
//            turn = "First";
//        }
//    }
//    cout << turn << endl;


}
