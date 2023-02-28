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
 
//************* RECURSIVE ***************

//  class Solution {
// private:
//    void helper(TreeNode *root , vector<int> &ans) {
//        if(!root) return;

//        ans.push_back(root->val);
//        helper(root -> left , ans);
//        helper(root->right , ans);
//    }
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         helper(root , ans);
//         return ans;
//     }
// };

//************* ITERATIVE ***************
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;
        if(root == NULL) return ans; // This is important

        st.push(root);

        while(!st.empty()) {
            TreeNode* node = st.top();
            st.pop();

            if(node -> right != NULL) st.push(node->right);
            if(node -> left != NULL) st.push(node->left);

            ans.push_back(node->val);
        }

        return ans;
    }
};

// TC-O(n)  SC-O(n)