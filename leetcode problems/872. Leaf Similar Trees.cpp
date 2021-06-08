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
    void leafCal(TreeNode* root, vector<int> &leaf){
        // base case
        if(!root) return;
        // if(root->left == NULL or root->right == NULL) return leaf;
        if(root->left == NULL and root->right == NULL){
            leaf.push_back(root->val);
        }
        // recursive case
        leafCal(root->left, leaf);
        leafCal(root->right, leaf);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;
        leafCal(root1, v1);
        leafCal(root2, v2);
        if(v1 == v2) return true;
        else return false;
    }
};