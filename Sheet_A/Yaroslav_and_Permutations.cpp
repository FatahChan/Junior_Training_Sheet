#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    int n;
    cin >> n;
    vector<int> arr1, arr2;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        arr1.push_back(temp);
    }
    arr2 = arr1;
    sort(arr2.begin(), arr2.end());
    auto it = unique(arr2.begin(), arr2.end());
    arr2.resize(distance(arr2.begin(), it));
    for (int i: arr2) {
        if (count(arr1.begin(), arr1.end(), i) > (n + 1) / 2) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";


    return 0;
}


