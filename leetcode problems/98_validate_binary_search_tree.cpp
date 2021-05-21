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
    bool isBST(TreeNode* root, long long int min, long long int max){
        // base case
        if (root == NULL) {
            return true;
        }

        // recursive case
        if ((root->val > min) and (root->val < max) 
            and (isBST(root->left, min, root->val)) 
            and (isBST(root->right, root->val, max))) {
            return true;
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        long long int n = 5;
        return isBST(root, INT_MIN-n, INT_MAX+n);
    }
};