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
    
    bool isEqual(TreeNode* root, TreeNode* subRoot){
        // base case
        if(!root and !subRoot) return true;
        if(!root or !subRoot) return false;
        
        // recursive case
        return ((root->val == subRoot->val) and 
                isEqual(root->left, subRoot->left) and 
                isEqual(root->right, subRoot->right));
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root and !subRoot) return true;
        if(!root or !subRoot) return false;
        
        return (isEqual(root, subRoot) or isSubtree(root->left, subRoot) or isSubtree(root->right, subRoot));
        
    }
};