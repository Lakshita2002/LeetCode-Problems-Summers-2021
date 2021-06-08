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
    vector<int> ans;
    vector<int> rightView(TreeNode* root, int level, int &max_level){
        
        // base case
        if(!root){
            return ans;
        }                                                            
        
        // recursive case
        if(level>max_level){
            ans.push_back(root->val);
            max_level = level;
        }
        rightView(root->right, level+1, max_level);
        rightView(root->left, level+1, max_level);
        
        return ans;
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
        int max_level = 0;
        vector<int> v = rightView(root, 1, max_level);
        return v;
        
    }
};