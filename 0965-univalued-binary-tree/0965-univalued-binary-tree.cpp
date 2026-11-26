class Solution {
public:
    int solve(TreeNode* root){
        if(!root) return true;
        if(root->left && root->val!=root->left->val ||
            root->right && root->val!=root->right->val) return false;
        return solve(root->left) && solve(root->right);
    }
    bool isUnivalTree(TreeNode* root) {
        return solve(root);
    }
};