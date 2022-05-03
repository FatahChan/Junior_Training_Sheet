#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    int sum = 0, n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        if (temp == "Tetrahedron") {
            sum += 4;
        } else if (temp == "Cube") {
            sum += 6;
        } else if (temp == "Octahedron") {
            sum += 8;
        } else if (temp == "Dodecahedron") {
            sum += 12;
        } else if (temp == "Icosahedron") {
            sum += 20;
        }
    }
    cout << sum;

    return 0;
}


