class Solution {
public:
    vector<vector<int>>ans;
    void solve(TreeNode* root,int targetSum,vector<int>& path){
        if(!root) return;
        path.push_back(root->val);
        if(!root->left && !root->right){
            if(targetSum==root->val){
                ans.push_back(path);
            }
            path.pop_back();
            return;
        }
        solve(root->left,targetSum-root->val,path);
        solve(root->right,targetSum-root->val,path);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root) return {};
        vector<int>path;
        solve(root,targetSum,path);
        return ans;
    }
};