#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    int n;
    string ss;
    cin >> n >> ss;
    int s, t;
    int first_R = ss.find('R');
    if (first_R == string::npos) {
        s = ss.rfind('L');
        t = ss.find('L');
        t--;
    } else {
        s = ss.find('R');
        t = ss.rfind('R');
        if (ss.find('L') == string::npos) {
            t++;
        }
    }
    cout << ++s << " " << ++t;
    return 0;
}


