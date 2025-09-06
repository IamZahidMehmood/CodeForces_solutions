#include <iostream>
// This code is written by Karan Mashru
using namespace std;

int main() {
    int n, s;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> s;

    int i = 0, j = n - 1, f = 0;

    // Two-pointer approach
    while (i < j) {
        if (a[i] + a[j] == s) {
            f = 1;
            break;
        } else if (a[i] + a[j] > s) {
            j--;
        } else {
            i++;
        }
    }

    if (f == 0)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}

