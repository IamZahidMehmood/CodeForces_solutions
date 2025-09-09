#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> adj(n);

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    for (int i = 0; i < n; i++) {
        cout << "Nodes adjacent to " << i << " are: ";
        for (auto [v, w] : adj[i]) {
            cout << v << " with edge weight " << w << ", ";
        }
        cout << "\n";
    }
}
