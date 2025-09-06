#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long sum = 0, ans = a[0];
    int l = 0, r = 0, ans_l = 0, ans_r = 0;

    for (int i = 0; i < n; i++) {
        r = i;
        sum += a[i];

        if (sum > ans) {
            ans = sum;
            ans_l = l;
            ans_r = r;
        }

        if (sum <= 0) {
            sum = 0;
            l = i + 1;
        }
    }

    cout << ans << "\n";
    cout << ans_l << " " << ans_r << "\n";

    return 0;
}
