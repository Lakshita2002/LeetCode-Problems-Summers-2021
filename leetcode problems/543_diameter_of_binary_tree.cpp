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
    class Pair{
        public:
        
        int diameter;
        int height;
    };
    
    Pair fastDiameter(TreeNode* root){
        Pair p;
        
        if(root == NULL){
            p.diameter = p.height = 0;
            return p;
        }
        
        Pair left = fastDiameter(root->left);
        Pair right = fastDiameter(root->right);
        
        p.height = max(left.height, right.height)+1;
        p.diameter = max(max(left.diameter, right.diameter), left.height+right.height);
        
        return p;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        return fastDiameter(root).diameter;
    }
};