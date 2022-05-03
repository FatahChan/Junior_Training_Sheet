#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    double x;
    cin >> x;
    int answer = 1;
    while (x != 1) {
        x /= 2;
        if (x != floor(x)) {
            answer++;
            x = floor(x);
        }
    }
    cout << answer;


    return 0;
}


