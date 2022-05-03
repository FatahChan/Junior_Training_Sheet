#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    string s;
    cin >> s;
    int size = s.size();
    while (s.size()) {
        if (s.substr(0, 3) == "WUB") {
            s.erase(0, 3);

        }
        if (s.substr(0, 3) != "WUB") {
            string ss = s.substr(0, s.find("WUB"));
            cout << ss << " ";
            s.erase(0, s.find("WUB"));
        }
    }

    return 0;
}


