// GG POTD https://www.geeksforgeeks.org/problems/mother-vertex/1

// class Solution {
// public:
//     // Helper function to perform DFS and mark reachable nodes
//     void dfs(int u, vector<vector<int>>& adj, vector<bool>& visited) {
//         visited[u] = true;
//         for (int v : adj[u]) {
//             if (!visited[v]) {
//                 dfs(v, adj, visited);
//             }
//         }
//     }

//     int findMotherVertex(int V, vector<vector<int>>& edges) {
//         // Step 0:Build an adjacency list for the directed graph
//         vector<vector<int>> adj(V);
//         for (auto& edge : edges) {
//             adj[edge[0]].push_back(edge[1]);
//         }

//         vector<bool> visited(V, false);
//         int last_v = 0;

//         // Step 1 Find the candidate mother vertex
//         // We find the last node that starts a DFS search
//         for (int i = 0; i < V; i++) {
//             if (!visited[i]) {
//                 dfs(i, adj, visited);
//                 last_v = i;
//             }
//         }

//         // Step 2 Verify if last_v can actually reach all other vertices
//         fill(visited.begin(), visited.end(), false);
//         dfs(last_v, adj, visited);

//         for (int i = 0; i < V; i++) {
//             if (!visited[i]) {
//                 return -1; // No mother vertex exists ghee khtam ho chuki he 
//             }
//         }

//         return last_v;
//     }
// };