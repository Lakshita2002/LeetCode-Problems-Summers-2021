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
    int i=0;
    TreeNode* createTree(int s, int e, vector<int>& preorder, vector<int>& inorder){
        // base case
        if(s>e){            
            return NULL;
        }
        
        // recursive case
        int data = preorder[i++];
        TreeNode* root = new TreeNode(data);
        int k;
        for(int j=s; j<=e; j++){
            if(inorder[j]==data){
                k=j;
                break;
            }
        }
        
        root->left = createTree(s, k-1, preorder, inorder);
        root->right = createTree(k+1, e, preorder, inorder);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        return createTree(0, n-1, preorder, inorder);
    }
};