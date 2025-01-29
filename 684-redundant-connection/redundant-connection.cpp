#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> parent(n + 1);
        vector<int> rank(n + 1, 1);
        
        // Initialize parent array
        for (int i = 1; i <= n; ++i) {
            parent[i] = i;
        }
        
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            
            int rootU = find(parent, u);
            int rootV = find(parent, v);
            
            if (rootU == rootV) {
                return edge; // This edge is redundant
            } else {
                // Union by rank
                if (rank[rootU] > rank[rootV]) {
                    parent[rootV] = rootU;
                } else if (rank[rootU] < rank[rootV]) {
                    parent[rootU] = rootV;
                } else {
                    parent[rootV] = rootU;
                    rank[rootU]++;
                }
            }
        }
        
        return {}; // No redundant edge found (though the problem guarantees one)
    }
    
private:
    int find(vector<int>& parent, int node) {
        if (parent[node] != node) {
            parent[node] = find(parent, parent[node]); // Path compression
        }
        return parent[node];
    }
};