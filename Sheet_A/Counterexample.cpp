#include <bits/stdc++.h>

using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

void counterexample(map<unsigned long long, vector<unsigned long long>> &co_prime) {
    for (auto i = co_prime.begin(); i != co_prime.end(); ++i) {
        for (auto j: i->second) {
            for (auto l: co_prime[j]) {

                if (gcd(i->first, l) != 1) {
                    cout << i->first << " " << j << " " << l;
                    return;
                }
            }
        }
    }
    cout << -1;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    unsigned long long l, r;
    cin >> l >> r;
    vector<unsigned long long> numbers;
    map<unsigned long long, vector<unsigned long long>> co_prime;

    for (unsigned long long i = l; i <= r; ++i) {
        numbers.push_back(i);
    }
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (gcd(min(numbers[i], numbers[j]), max(numbers[i], numbers[j])) == 1) {
                co_prime[numbers[i]].push_back(numbers[j]);
            }
        }
    }
    counterexample(co_prime);
    int gooo;

    return 0;
}


