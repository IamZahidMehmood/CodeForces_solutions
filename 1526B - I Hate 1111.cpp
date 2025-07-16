#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        bool found = false;
        for (int i = 0; i <= 1000; ++i) {
            if (x - 111 * i >= 0 && (x - 111 * i) % 11 == 0) {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}
