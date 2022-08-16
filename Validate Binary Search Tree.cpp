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
    bool fun(TreeNode* root,TreeNode*& pre){
        if(root==NULL)
            return true;
        bool left = true,right = true;
        left = fun(root->left,pre);
        
        if(pre==NULL){
            pre=root;
        }
        else{
            if(pre->val>=root->val)
                return false;
            pre=root;
        }
        right = fun(root->right,pre);
        return left&&right;
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return true;
        TreeNode* pre=NULL;
        return fun(root,pre);
    }
};
