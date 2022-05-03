#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    int n, x, a, b;
    cin >> n >> x;
    bool answer = true;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (7 - a == x || 7 - b == x || 7 - a == 7 - x || 7 - b == 7 - x) {
            answer = false;
            break;
        }
    }
    answer ? cout << "YES" : cout << "NO";

    return 0;
}


