#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    long long n;
    cin >> n;
    if (n % 2 == 0) {
        n /= 2;
        cout << (n * (n + 1)) - (n * n);
    } else {
        cout << ((n / 2) * ((n / 2) + 1)) - (((n / 2) + 1) * ((n / 2) + 1));
    }
    return 0;
}
