#include <iostream>
using namespace std;

int main() {
    int n, q, l, r, sum;

    cin >> n;
    int a[n], pre_sum[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Build prefix sum array
    pre_sum[0] = a[0];
    for (int i = 1; i < n; i++) {
        pre_sum[i] = pre_sum[i - 1] + a[i];
    }

    cin >> q;

    // Answer queries
    for (int j = 0; j < q; j++) {
        cin >> l >> r;
        if (l > 0)
            sum = pre_sum[r] - pre_sum[l - 1];
        else
            sum = pre_sum[r];

        cout << sum << "\n";
    }

    return 0;
}
