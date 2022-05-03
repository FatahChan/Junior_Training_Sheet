#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

    int n;
    cin >> n;
    string s = "maybe";
    int b, a;
    vector<int> ratings_before;
    vector<int> ratings_after;
    for (int i = 0; i < n; ++i) {
        cin >> b >> a;
        ratings_before.push_back(b);
        ratings_after.push_back(a);
        if (a != b) {
            s = "rated";
            break;
        }
    }
    if (s != "rated") {
        for (int i = 1; i < n; ++i) {
            if (ratings_after.at(i) > ratings_after.at(i - 1)) {
                s = "unrated";
                break;
            }
        }
    }
    cout << s;
}
