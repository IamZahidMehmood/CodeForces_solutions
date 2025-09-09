#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Nodes adjacent to " << i << " are: ";
        for (int j = 0; j < n; j++) {
            if (adj[i][j]) cout << j << " ";
        }
        cout << "\n";
    }
}
