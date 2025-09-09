#include <bits/stdc++.h>
using namespace std;

bool dfs(int u, vector<vector<int>>& adj, vector<bool>& vis, vector<bool>& walk) {
    vis[u] = true;
    walk[u] = true;

    for (int v : adj[u]) {
        if (!vis[v]) {
            if (dfs(v, adj, vis, walk)) return true;
        } else if (walk[v]) {
            return true;
        }
    }

    walk[u] = false;
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    vector<bool> vis(n, false), walk(n, false);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); // directed edge
    }

    bool ans = false;
    for (int i = 0; i < n; i++) {
        if (!vis[i] && dfs(i, adj, vis, walk)) {
            ans = true;
            break;
        }
    }

    if (ans) cout << "Cycle exists\n";
    else cout << "No cycles\n";
}
