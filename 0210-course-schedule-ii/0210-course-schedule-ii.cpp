class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        vector<int> indegree(numCourses, 0);
        queue<int> q;
        vector<int> order;
        // Converting in adjcencylist
        for(auto x : prerequisites) {
            adj[x[1]].push_back(x[0]);
        }
        // Counting indegree of nodes
        for(int i = 0 ; i < numCourses ; i++) {
            for(auto x : adj[i]) {
                indegree[x]++;
            }
        }
        // Checking which node's indgree is zero
        for(int i = 0 ; i < numCourses ; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        // Simple TOPO Sort and putting ans in order vector
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            order.push_back(node);

            for(auto adjNode : adj[node]) {
                indegree[adjNode]--;
                if(indegree[adjNode] == 0) {
                    q.push(adjNode);
                }
            }
        }
        // checking our answer is correct or not
        if(order.size() == numCourses) {
            return order;
        }
        else 
            return {};
    }
};