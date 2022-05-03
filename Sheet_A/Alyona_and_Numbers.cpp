#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    long long n, m;
    cin >> n >> m;
    if (n > m)swap(n, m);
    long long first[10], second[10];
    fill(first, first + 10, n / 10);
    fill(second, second + 10, m / 10);
    for (int i = 1; i <= n % 10; ++i) {
        first[i]++;
    }
    for (int i = 1; i <= m % 10; ++i) {
        second[i]++;
    }
    long long ans = 0;
    for (long long i = 0; i < 10; ++i) {
        for (long long j = 0; j < 10; ++j) {
            if ((i + j) % 5 == 0) {
                ans += (first[i] * second[j]);
            }
        }
    }
    cout << ans;
    return 0;
}


