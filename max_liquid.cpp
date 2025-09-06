#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    int h[w];
    long pre_max[w], suf_max[w], ans = 0;

    for (int i = 0; i < w; i++) {
        cin >> h[i];
    }

    pre_max[0] = h[0];
    for (int i = 1; i < w; i++) {
        pre_max[i] = max(pre_max[i - 1], long(h[i]));
    }

    suf_max[w - 1] = h[w - 1];
    for (int i = w - 2; i >= 0; i--) {
        suf_max[i] = max(suf_max[i + 1], long(h[i]));
    }

    for (int i = 0; i < w; i++) {
        ans += min(pre_max[i], suf_max[i]) - h[i];
    }

    cout << ans << "\n";
    return 0;
}
