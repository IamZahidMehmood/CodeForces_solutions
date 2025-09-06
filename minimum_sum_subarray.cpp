#include <iostream>
using namespace std;

int main() {
    int n, p;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> p;

    int ans = 0;
    for (int i = 0; i < p; i++) {
        ans += a[i];
    }

    int sum = ans;
    for (int i = p; i < n; i++) {
        sum = sum - a[i - p] + a[i];
        ans = min(ans, sum);
    }

    cout << ans << "\n";
    return 0;
}
