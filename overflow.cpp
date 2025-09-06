#include <iostream>
using namespace std;

int main() {
    int a1 = 10000000, a2 = 10000000;
    int ans;
    long s = 100000000000000, ans1;

    ans1 = s;
    ans = s;   // Will overflow since `ans` is int

    long b1 = a1, b2 = a2;
    ans1 = b1 * b2;

    cout << ans1 << "\n";

    return 0;
}
