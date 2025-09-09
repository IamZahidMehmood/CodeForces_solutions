#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>>& adj, vector<bool>& vis, vector<int>& ans) {
    queue<int> q;
    q.push(start);
    vis[start] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        ans.push_back(u);

        for (int v : adj[u]) {
            if (!vis[v]) {
                q.push(v);
                vis[v] = true;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    vector<int> ans;
    vector<bool> vis(n, false);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;
    cin >> start;

    bfs(start, adj, vis, ans);

    for (int x : ans) cout << x << " ";
    cout << "\n";
}
