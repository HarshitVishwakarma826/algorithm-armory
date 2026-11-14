class Solution {
public:
    int ans=0;
    void solve(TreeNode* root,int mini,int maxi){
        if(!root) return;
        mini=min(mini,root->val);
        maxi=max(maxi,root->val);
        ans=max(ans,maxi-mini);
        solve(root->left,mini,maxi);
        solve(root->right,mini,maxi);
    }
    int maxAncestorDiff(TreeNode* root) {
        solve(root,root->val,root->val);
        return ans;
    }
};