#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    int n, flag = 1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        if (temp % 2 == 0) {
            cout << temp / 2 << endl;
        } else {
            cout << (temp + flag) / 2 << endl;
            flag *= -1;
        }


    }


    return 0;
}


