#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];
        bool ok = true;
        long long need = 0;
        for (int i = 0; i < n; i++) {
            if (h[i] + need < i) {
                ok = false;
                break;
            }
            need = h[i] + need - i;
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
