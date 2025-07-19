#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
    char dir;
    string typed, keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> dir >> typed;
    unordered_map<char, char> mp;
    for (int i = 0; i < keys.size(); i++) {
        if (dir == 'R' && i > 0) mp[keys[i]] = keys[i - 1];
        if (dir == 'L' && i < keys.size() - 1) mp[keys[i]] = keys[i + 1];
    }
    for (char c : typed) cout << mp[c];
    cout << endl;
    return 0;
}