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
    void invertBT(TreeNode* root){
        // base case
        if(root == NULL) return;
        // recursive case
        swap(root->left, root->right);
        invertBT(root->left);
        invertBT(root->right);
    }
    
    TreeNode* invertTree(TreeNode* root) {
        invertBT(root);
        return root;
    }
};