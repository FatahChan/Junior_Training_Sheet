#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    long double n, m, a;
    cin >> m >> n >> a;
    cout << fixed << (long long) (ceil(n / a) * ceil(m / a));
    return 0;
}


