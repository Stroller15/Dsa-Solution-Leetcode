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
   int height(TreeNode *node) {
       if(!node) return 0;
       return max(height(node->left) , height(node->right)) + 1;
   }

   void inorderUtil(TreeNode *root , int &ans) {
       if(root != NULL) {
           inorderUtil(root -> left , ans);

            int lt = height(root -> left);
            int rt = height(root -> right);

            if(abs(lt - rt) > 1) ans = ans && false;

           inorderUtil(root -> right , ans);
       }
   }
    bool isBalanced(TreeNode* root) {
        int ans = true;
        inorderUtil(root , ans);
        return ans;
    }
};