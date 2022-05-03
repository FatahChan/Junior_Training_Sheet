#include <iostream>
#include <set>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin >> n;
    multiset<int> coins;
    multiset<int> coinsTaken;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        coins.insert(temp);
    }
    while ((accumulate(coins.begin(), coins.end(), 0)) >= (accumulate(coinsTaken.begin(), coinsTaken.end(), 0))) {
        coinsTaken.insert(*coins.rbegin());
        coins.erase(coins.find(*coins.rbegin()));
    }
    cout << coinsTaken.size();

    return 0;

}
