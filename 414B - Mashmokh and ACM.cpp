#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; ++i) dp[1][i] = 1;
    for (int len = 2; len <= k; ++len) {
        for (int i = 1; i <= n; ++i) {
            for (int j = i; j <= n; j += i) {
                dp[len][j] = (dp[len][j] + dp[len - 1][i]) % MOD;
            }
        }
    }
    int res = 0;
    for (int i = 1; i <= n; ++i) {
        res = (res + dp[k][i]) % MOD;
    }
    cout << res << endl;
    return 0;
}
