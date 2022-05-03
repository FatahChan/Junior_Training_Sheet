#include <iostream>
#include <string>

using namespace std;

int main() {
    char d;
    cin >> d;
    string s;
    cin >> s;
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    if (d == 'R') {
        for (int i = 0; i < s.size(); ++i) {
            cout << key[key.find(s[i]) - 1];
        }
    } else {
        for (int i = 0; i < s.size(); ++i) {
            cout << key[key.find(s[i]) + 1];
        }
    }
    return 0;


}
