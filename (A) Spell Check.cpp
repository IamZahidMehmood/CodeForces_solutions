#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    string target = "Timur";
    sort(target.begin(), target.end());
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        sort(s.begin(), s.end());
        if (n == 5 && s == target)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}