// class Solution {
// public:
//     vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
//         vector<int> adjLst[n];
//         vector<int> ans;
//         for(auto edge : edges) {
//             adjLst[edge[0]].push_back(edge[1]);
//         }

//         vector<int> indegree(n, 0);

//         for(int i = 0 ; i < n ; i++) {
//             for(auto x : adjLst[i]) {
//                 indegree[x]++;
//             }
//         }

//         for(int i = 0 ; i < n ; i++) {
//             if(indegree[i] == 0) {
//                 ans.push_back(i);
//             }
//         }
//         return ans;
//     }
// };

// Simple Version

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> indegree(n, false);
        vector<int> ans;

        for(auto edge: edges) {
            int u = edge[0];
            int v = edge[1];

            //  indegree u --->> v

            indegree[v] = true;
        }

        for(int i = 0 ; i < n ; i++) {
            if(indegree[i] == false) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};