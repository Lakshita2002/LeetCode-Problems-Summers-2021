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
    int sumLeft(TreeNode* root, int &sum){   
        // base case
        if(root==NULL) return 0;
        // recursive case
        if(root->left and root->left->left == NULL and root->left->right == NULL){
            sum += root->left->val;
        }
        sumLeft(root->left, sum);
        sumLeft(root->right, sum);
        
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        sumLeft(root, sum);
        return sum;
    }
};