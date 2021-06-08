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
    TreeNode* createTree(int s, int e, vector<int>& inorder, vector<int>& postorder){
        // base case
        if(s>e){            
            return NULL;
        }
        
        // recursive case
        int data = postorder[postorder.size()-i-1];
        i++;
        // cout << i << endl;
        TreeNode* root = new TreeNode(data);
        int k;
        for(int j=s; j<=e; j++){
            if(inorder[j]==data){
                k=j;
                break;
            }
        }
        
        root->right = createTree(k+1, e, inorder, postorder);
        root->left = createTree(s, k-1, inorder, postorder);   
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        return createTree(0, n-1, inorder, postorder);
    }
};