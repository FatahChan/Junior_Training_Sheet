#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s.size() < 26) {
        cout << "NO";
    } else {
        bool pangram = true;
        for (int i = 0; i < s.size(); ++i) {
            s[i] = tolower(s[i]);
        }
        for (int i = 0; i < 26; ++i) {
            if (s.find(97 + i) == string::npos) {
                pangram = false;
                break;
            }
        }
        pangram ? cout << "YES" : cout << "NO";
    }

    return 0;
}
