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
    vector<vector<int>> levelOrder(TreeNode* root) {

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        vector<vector<int>> v;
        vector<int> level;

        if(root == NULL){
            return v;
        }
        while(!q.empty()){
            TreeNode* x = q.front();
            q.pop();

            if(x==NULL){
                v.push_back(level);
                level.clear();
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                level.push_back(x->val);
                if(x->left) q.push(x->left);
                if(x->right) q.push(x->right);
            }
        }
        
        return v;
        
    }
};