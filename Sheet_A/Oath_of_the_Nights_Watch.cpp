#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    if (n < 3) {
        cout << 0;
    } else {
        int lowCount = s.count(*s.begin());
        int hiCount = s.count(*s.rbegin());
        if (lowCount == n) {
            cout << 0;
        } else {
            cout << n - lowCount - hiCount;
        }
    }


    return 0;


}
