#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], pre[n], suf[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Prefix array
    pre[0] = (a[0] == 1) ? 0 : n;
    for (int i = 1; i < n; i++) {
        pre[i] = (a[i] == 1) ? 0 : pre[i - 1] + 1;
    }

    // Suffix array
    suf[n - 1] = (a[n - 1] == 1) ? 0 : n;
    for (int i = n - 2; i >= 0; i--) {
        suf[i] = (a[i] == 1) ? 0 : suf[i + 1] + 1;
    }

    // Print prefix
    for (int i = 0; i < n; i++) {
        cout << pre[i] << " ";
    }
    cout << "\n";

    // Print suffix
    for (int i = 0; i < n; i++) {
        cout << suf[i] << " ";
    }
    cout << "\n";

    // Print min of prefix & suffix
    for (int i = 0; i < n; i++) {
        cout << min(pre[i], suf[i]) << " ";
    }

    return 0;
}
