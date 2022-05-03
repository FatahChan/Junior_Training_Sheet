#include <bits/stdc++.h>

using namespace std;

inline void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

class Reading {
public:
    int d, m, y, c;
    bool leapYear;
    bool lastDay;

    Reading(int d, int m, int y, int c) {
        this->d = d;
        this->m = m;
        this->y = y;
        this->c = c;
        leapYear = isLeapYear(y);
        lastDay = isLastDay(d, m);
    }

    bool isLeapYear(int y) {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
            return true;
        }
        return false;
    }

    bool isLastDay(int d, int m) {
        int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (m != 2 && d == daysInMonth[m - 1]) {
            return true;
        }
        if (m == 2 && (leapYear && d == daysInMonth[m - 1] + 1 || !leapYear && d == daysInMonth[m - 1])) {
            return true;
        }
        return false;
    }

};


bool back2back(Reading first, Reading second) {
    if (first.m == second.m && first.y == second.y && second.d - first.d == 1) {
        return true;
    }
    if (first.y == second.y && second.m - first.m == 1 && first.lastDay && second.d == 1) {
        return true;
    }
    if (second.y - first.y == 1 && first.m == 12 && second.m == 1 && first.lastDay && second.d == 1) {
        return true;
    }
    return false;
}

int main() {
    FastIO();
    int t;
    while (cin >> t, t) {
        long long totalD = 0, totalC = 0;
        int d, m, y, c;
        cin >> d >> m >> y >> c;
        Reading first = Reading(d, m, y, c);
        t--;
        while (t--) {
            cin >> d >> m >> y >> c;
            Reading second = Reading(d, m, y, c);
            if (back2back(first, second)) {
                totalD++;
                totalC += second.c - first.c;
            }
            first = second;
        }
        cout << totalD << " " << totalC << "\n";
    }
}
