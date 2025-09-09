#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1, vector<int>(n + 1, -1));

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = w;
        // adj[v][u] = w; // for undirected graph
    }

    for (int i = 1; i <= n; i++) {
        cout << "Nodes adjacent to " << i << " are: ";
        for (int j = 1; j <= n; j++) {
            if (adj[i][j] != -1) {
                cout << j << " with edge weight " << adj[i][j] << ", ";
            }
        }
        cout << "\n";
    }
}
