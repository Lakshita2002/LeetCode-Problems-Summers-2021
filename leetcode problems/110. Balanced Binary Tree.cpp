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
        int height;
        bool balanced;
        Pair(){
            height = 0;
            balanced = true;
        }
    };
    
    Pair IsBalanced(TreeNode* root){
        Pair p;
        // base case
        if(root==NULL) return p;
        
        // recursive case
        Pair left = IsBalanced(root->left);
        Pair right = IsBalanced(root->right);
        p.height = max(left.height, right.height)+1;
        if (left.balanced and right.balanced and abs(left.height-right.height)<=1){
            p.balanced = true;
        }
        else{
            p.balanced = false;
        }
        
        return p;
    }
    
    bool isBalanced(TreeNode* root) {
        Pair p = IsBalanced(root);
        return p.balanced;
    }
};