class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // we have to add new node to leaf node;
        if(root==NULL){
            // insteading of returning null we will return generated node  
            TreeNode* temp = new TreeNode(val);
            return temp;
        }
        if(val<root->val){
            root->left = insertIntoBST(root->left,val);
        }else{
            root->right = insertIntoBST(root->right,val);
        }
        return root;
    }
};
