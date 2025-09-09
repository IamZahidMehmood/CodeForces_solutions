#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;

    vector<int> a(n + 1), pre_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) pre_sum[i] = pre_sum[i - 1] + a[i];

    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        int sum = pre_sum[r] - pre_sum[l - 1];
        cout << sum << "\n";
    }
}
