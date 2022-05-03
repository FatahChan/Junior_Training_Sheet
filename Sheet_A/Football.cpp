#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    map<string, int> goals;
    int n;
    cin >> n;

//    goals.begin()->second = 0;
//    goals.rbegin()->second = 0;
    for (int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        goals[temp]++;
    }
    if (goals.begin()->second < goals.rbegin()->second) {
        cout << goals.rbegin()->first;
    } else {
        cout << goals.begin()->first;
    }


    return 0;
}


