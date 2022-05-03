#include <iostream>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0 && k == n) {
        cout << k;
    } else if (n % 2 != 0 && k == n) {
        if (k == 1) {
            cout << k;
        } else {
            cout << k - 1;
        }
    } else {
        if (n % 2 != 0) {
            n++;
        }

        if (k <= n / 2) {
            cout << (k * 2) - 1;
        } else {
            cout << (k - n / 2) * 2;
        }
    }
    return 0;
}

// 10 10 (k = n, k is even) = k
//{1 3 5 7 9 2 4 6 8 10}

// 9 9 (k=n, k is odd) = k-1
//{1 3 5 7 9 2 4 6 8}

// 11 11 (k=n, k is odd) = k-1
//{1 3 5 7 9 11 2 4 6 8 10}

// 1 1 ()= k
//{1}

// 3 3 ()= k
//{1 3 2}
//10 5 (n is even, k = n/2) = (k*2) - 1
//{1 3 5 7 9 2 4 6 8 10}

//10 4 (n is even, k < n/2) = (k*2) - 1
//{1 3 5 7 9 2 4 6 8 10}

//9 5 (n is odd, k > n/2) = (k*2) - 1
//{1 3 5 7 9 2 4 6 8}

//10 6 (n is even, k > n/2) = (k*2) - 1
//{1 3 5 7 9 2 4 6 8 10}

