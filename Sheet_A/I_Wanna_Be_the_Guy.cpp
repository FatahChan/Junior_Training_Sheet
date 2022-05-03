#include <iostream>
#include <set>
#include <numeric>

using namespace std;

int main() {
    set<int> levels;
    int n, p;
    cin >> n;
    cin >> p;
    for (int i = 0; i < p; ++i) {
        int temp;
        cin >> temp;
        levels.insert(temp);
    }
    cin >> p;
    for (int i = 0; i < p; ++i) {
        int temp;
        cin >> temp;
        levels.insert(temp);
    }
    (accumulate(levels.begin(), levels.end(), 0) == (n * (n + 1)) / 2) ? cout << "I become the guy." : cout
            << "Oh, my keyboard!";

    return 0;
}


// 1 2 3 4 -> 1 + 2 + 3 + 4 = 10