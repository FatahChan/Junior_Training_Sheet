#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    vector<string> sqr;
    for (int i = 0; i < 4; ++i) {
        string temp;
        cin >> temp;
        sqr.push_back(temp);
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            string smallSqr = "";
            smallSqr += sqr[i].substr(j, 2);
            smallSqr += sqr[i + 1].substr(j, 2);
            if ((count(smallSqr.begin(), smallSqr.end(), '.') == 4) ||
                (count(smallSqr.begin(), smallSqr.end(), '.') == 3) ||
                (count(s]
            6 - +
                    - ++ ++ -- - +

                            mallSqr.begin(), smallSqr.end(), '#') == 4) ||
            (count(smallSqr.begin(), smallSqr.end(), '#') == 3)
            ){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

    return 0;
}


