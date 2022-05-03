#include <bits/stdc++.h>

using namespace std;

vector<int> intersection(vector<int> one, vector<int> two, vector<int> three) {
    vector<int> new_vec(8);
    auto it = set_intersection(one.begin(), one.end(), two.begin(), two.end(), new_vec.begin());
    it = set_intersection(new_vec.begin(), new_vec.end(), three.begin(), three.end(), new_vec.begin());
    new_vec.resize(it - new_vec.begin());
    return new_vec;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //write from here
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    map<int, vector<int>> acute;
    acute[3] = {1, 2};
    acute[4] = {1, 3};
    acute[5] = {1, 2, 3, 4};
    acute[6] = {1, 2, 4, 5};
    acute[7] = {1, 2, 3, 4, 5, 6};
    acute[8] = {1, 2, 3, 5, 6, 7};
    acute[9] = {1, 2, 3, 4, 5, 6, 7, 8};
    acute[10] = {1, 2, 3, 4, 6, 7, 8, 9};
    acute[11] = {2, 3, 4, 5, 6, 7, 8, 9};
    acute[12] = {3, 4, 5, 7, 8, 9};
    acute[13] = {4, 5, 6, 7, 8, 9};
    acute[14] = {5, 6, 8, 9};
    acute[15] = {6, 7, 8, 9};
    acute[16] = {7, 9};
    acute[17] = {8, 9};


    vector<vector<int>> pos;
    pos.push_back(intersection(acute[r1], acute[c1], acute[d1]));
    pos.push_back(intersection(acute[r1], acute[c2], acute[d2]));
    pos.push_back(intersection(acute[r2], acute[c1], acute[d2]));
    pos.push_back(intersection(acute[r2], acute[c2], acute[d1]));
    for (int k = 0; k < 8; ++k) {
        for (int i = 0; i < pos[0].size(); ++i) {
            auto l = r1 - pos[0][i];
            if (find(pos[1].begin(), pos[1].end(), r1 - pos[0][i]) == pos[1].end()) {
                pos[0].erase(pos[0].begin() + i);
                --i;
            } else if (find(pos[2].begin(), pos[2].end(), c1 - pos[0][i]) == pos[2].end()) {
                pos[0].erase(pos[0].begin() + i);
                --i;
            } else if (find(pos[3].begin(), pos[3].end(), d1 - pos[0][i]) == pos[3].end()) {
                pos[0].erase(pos[0].begin() + i);
                --i;
            }
        }
        for (int i = 0; i < pos[1].size(); ++i) {
            if (find(pos[0].begin(), pos[0].end(), r1 - pos[1][i]) == pos[0].end()) {
                pos[1].erase(pos[1].begin() + i);
                --i;
            } else if (find(pos[3].begin(), pos[3].end(), c2 - pos[1][i]) == pos[3].end()) {
                pos[1].erase(pos[1].begin() + i);
                --i;
            } else if (find(pos[2].begin(), pos[2].end(), d2 - pos[1][i]) == pos[2].end()) {
                pos[1].erase(pos[1].begin() + i);
                --i;
            }
        }
        for (int i = 0; i < pos[2].size(); ++i) {
            if (find(pos[0].begin(), pos[0].end(), c1 - pos[2][i]) == pos[0].end()) {
                pos[2].erase(pos[2].begin() + i);
                --i;
            } else if (find(pos[3].begin(), pos[3].end(), r2 - pos[2][i]) == pos[3].end()) {
                pos[2].erase(pos[2].begin() + i);
                --i;
            } else if (find(pos[1].begin(), pos[1].end(), d2 - pos[2][i]) == pos[1].end()) {
                pos[2].erase(pos[2].begin() + i);
                --i;
            }
        }
        for (int i = 0; i < pos[3].size(); ++i) {
            if (find(pos[0].begin(), pos[0].end(), d1 - pos[3][i]) == pos[0].end()) {
                pos[3].erase(pos[3].begin() + i);
                --i;
            } else if (find(pos[1].begin(), pos[1].end(), c2 - pos[3][i]) == pos[1].end()) {
                pos[3].erase(pos[3].begin() + i);
                --i;
            } else if (find(pos[2].begin(), pos[2].end(), r2 - pos[3][i]) == pos[2].end()) {
                pos[3].erase(pos[3].begin() + i);
                --i;
            }
        }
    }


    if (pos[0][0] + pos[1][0] == r1 &&
        pos[0][0] + pos[2][0] == c1 &&
        pos[0][0] + pos[3][0] == d1 &&

        pos[2][0] + pos[3][0] == r2 &&
        pos[1][0] + pos[3][0] == c2 &&
        pos[1][0] + pos[2][0] == d2 &&

        pos[0][0] != pos[1][0] &&
        pos[0][0] != pos[2][0] &&
        pos[0][0] != pos[3][0] &&

        pos[1][0] != pos[2][0] &&
        pos[1][0] != pos[3][0] &&

        pos[2][0] != pos[3][0]
            ) {
        cout << pos[0][0] << " " << pos[1][0] << "\n" << pos[2][0] << " " << pos[3][0];
    } else {
        cout << -1;
    }
    return 0;
}


