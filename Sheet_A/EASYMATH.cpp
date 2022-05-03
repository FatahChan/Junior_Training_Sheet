#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }

long long lcmArray(vector<long long> array) {
    long long size;
    size = array.size();
    long long ans = array[0];
    for (int i = 1; i < size; ++i) {
        ans = ((array[i] * ans) / gcd(array[i], ans));
    }
    return ans;
}

//numbers of numbers that is divisible by n between l and r
long long nndnblr(long long l, long long r, long long n) {
    long long y, x;
    x = l % n ? l / n + 1 : l / n;
    y = r / n;
    return y - x + 1;
}

int main() {
    FastIO();
    int t;
    cin >> t;
    while (t--) {
        long long l, r, a, d;
        cin >> l >> r >> a >> d;
        long long n[5];
        long long answer = 0;
        for (int i = 0; i < 5; ++i) {
            n[i] = (a + i * d);
            answer += nndnblr(l, r, (a + i * d));
        }

        vector<long long> lcm_arr;
        for (int i = 0; i < 5; ++i) {
            for (int j = i + 1; j < 5; ++j) {
                lcm_arr = vector<long long>{n[i], n[j]};
                long long lcm = lcmArray(lcm_arr);
                answer -= nndnblr(l, r, lcm);;
            }
        }

        for (int i = 0; i < 5; ++i) {
            for (int j = i + 1; j < 5; ++j) {
                for (int k = j + 1; k < 5; ++k) {
                    lcm_arr = vector<long long>{n[i], n[j], n[k]};
                    long long lcm = lcmArray(lcm_arr);
                    long long test = nndnblr(l, r, lcm);
                    answer += test;
                }
            }
        }

        for (int i = 0; i < 5; ++i) {
            for (int j = i + 1; j < 5; ++j) {
                for (int k = j + 1; k < 5; ++k) {
                    for (int m = k + 1; m < 5; ++m) {
                        lcm_arr = vector<long long>{n[i], n[j], n[k], n[m]};
                        long long lcm = lcmArray(lcm_arr);
                        long long test = nndnblr(l, r, lcm);
                        answer -= test;
                    }
                }
            }
        }
        lcm_arr = vector<long long>(n, n + 5);
        answer += nndnblr(l, r, lcmArray(lcm_arr));

        cout << r - l + 1 - answer << "\n";

    }
}
