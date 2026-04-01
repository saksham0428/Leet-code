class Solution {
public:
    bool dfs(int node, vector<vector<int>>& adj, vector<bool>& vis, int dest) {
        if (node == dest) return true;
        vis[node] = true;
        for (int neighbor : adj[node]) {
            if (!vis[neighbor]) {
                if (dfs(neighbor, adj, vis, dest))
                    return true;
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool> vis(n, false);
        return dfs(source, adj, vis, destination);
    }
};