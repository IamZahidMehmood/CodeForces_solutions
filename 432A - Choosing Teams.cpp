#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (v[i] + k <= 5)
            count++;
    }
    cout << count / 3 << endl;
    return 0;
}
