class Solution {
public:
    int ans=INT_MIN;
    void solve(TreeNode* root,vector<int>& path){
        if(!root) return;
        path.push_back(root->val);
        int maxi=*max_element(path.begin(),path.end());
        int mini=*min_element(path.begin(),path.end());
        ans=max(maxi-mini,ans);
        solve(root->left,path);
        solve(root->right,path);
        path.pop_back();
    }
    int maxAncestorDiff(TreeNode* root) {
        vector<int>path;
        solve(root,path);
        return ans;
    }
};