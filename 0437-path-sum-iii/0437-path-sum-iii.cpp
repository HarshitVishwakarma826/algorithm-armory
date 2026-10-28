class Solution {
public:
    int solve(TreeNode* root,long long targetSum){
        if(!root) return 0;
        int count=0;
        if(root->val==targetSum) count++;
        count+=solve(root->left,targetSum-root->val);
        count+=solve(root->right,targetSum-root->val);
        return count;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        return solve(root,targetSum)+pathSum(root->left,targetSum)+pathSum(root->right,targetSum);
    }
};