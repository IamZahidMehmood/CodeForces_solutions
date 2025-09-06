#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int j;
    cin >> j;

    cout << a[j - 1] << "\n";
    return 0;
}
