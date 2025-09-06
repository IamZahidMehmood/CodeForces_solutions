#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int sum = 0, c = 1;

    for (int j = 0; j < m; j++) {
        sum += a[0][j] * c;
        c++;
    }

    for (int i = 1; i < n; i++) {
        sum += a[i][m - 1] * c;
        c++;
    }

    if (n > 1) {
        for (int j = m - 2; j >= 0; j--) {
            sum += a[n - 1][j] * c;
            c++;
        }
    }

    if (m > 1) {
        for (int i = n - 2; i >= 1; i--) {
            sum += a[i][0] * c;
            c++;
        }
    }

    cout << sum << "\n";
    return 0;
}
