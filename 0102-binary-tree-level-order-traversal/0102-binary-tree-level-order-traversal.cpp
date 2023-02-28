/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if(root == NULL) return ans; // important line

        q.push(root);

        while(!q.empty()) {
            int qSize = q.size();
            vector<int> level;

            for(int i = 0 ; i < qSize ; i++) {
                TreeNode* node = q.front();
                q.pop();   // important line

                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);

                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};

// The time complexity of the given code is O(n), where n is the number of nodes in the binary tree. This is because the code traverses each node exactly once, and the time taken for each node is constant.

// The space complexity of the code is also O(n), where n is the number of nodes in the binary tree. This is because at any point in time, the maximum number of nodes that can be present in the queue is the number of nodes at the lowest level of the binary tree. In a balanced binary tree, this is approximately n/2, and in the worst case, it can be n-1 if the binary tree is a skewed tree. Therefore, the space required for the queue is O(n), which dominates the space required for the output vector of vectors, which is also O(n) because it stores each node value exactly once.