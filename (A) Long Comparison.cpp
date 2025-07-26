#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string x1, x2;
        int p1, p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;
        int len1 = x1.size() + p1;
        int len2 = x2.size() + p2;
        if (len1 < len2) {
            cout << "<\n";
        } else if (len1 > len2) {
            cout << ">\n";
        } else {
            int diff1 = max(0, (int)x2.size() - (int)x1.size());
            int diff2 = max(0, (int)x1.size() - (int)x2.size());
            string a = x1 + string(diff1, '0');
            string b = x2 + string(diff2, '0');
            if (a < b) cout << "<\n";
            else if (a > b) cout << ">\n";
            else cout << "=\n";
        }
    }
    return 0;
}