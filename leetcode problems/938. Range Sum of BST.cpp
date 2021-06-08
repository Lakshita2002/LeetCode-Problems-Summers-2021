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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        // base case
        if(root == NULL) sum += 0;
        
        // recursive case
        else{
            if(root->val <= high and root->val >= low){
                sum += root->val;
                sum += rangeSumBST(root->left, low, high);
                sum += rangeSumBST(root->right, low, high);
            }
            else if(root->val > high){
                sum += rangeSumBST(root->left, low, high);
            }
            else if(root->val <low){
                sum += rangeSumBST(root->right, low, high);
            }
        }
        
        return sum;
        
    }
};