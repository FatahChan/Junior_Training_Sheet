#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    FastIO();
    int n1, n2;
    while (cin >> n1) {
        cin >> n2;
        string answer;
        if (gcd(n1, n2) == 1) answer = "Good Choice\n\n";
        else answer = "Bad Choice\n\n";

        cout << setw(10) << n1 << setw(10) << n2 << "    ";
        cout << answer;
    }
}


