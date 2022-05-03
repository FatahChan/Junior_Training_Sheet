#include <iostream>
#include <cmath>

using namespace std;

//bool isPrime(long long n){
//    if (n == 2 || n == 3){
//        return true;
//    }
//    if(n%2==0){
//        return false;
//    }
//    for (int i = 3; i <= sqrt(n);  i+=2) {
//        if(n%i==0){
//            return false;
//        }
//    }
//    return true;
//}
int main() {

    long long n;
    while (cin >> n && n != 0) {
        long long sq = sqrt(n);
        sq * sq == n ? cout << "yes\n" : cout << "no\n";
    }

    return 0;
}
