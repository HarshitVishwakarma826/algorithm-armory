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
    void solve(TreeNode* root,long long &mini,long long &secmini){
        if(!root) return;
        if(root->val<mini){
            secmini=mini;
            mini=root->val;
        }
        else if(root->val>mini && root->val<secmini) secmini=root->val;
        solve(root->left,mini,secmini);
        solve(root->right,mini,secmini);
    }
    int findSecondMinimumValue(TreeNode* root) {
        long long mini=LLONG_MAX,secmini=LLONG_MAX;
        solve(root,mini,secmini);
        return secmini==LLONG_MAX?-1:(int)secmini;
    }
};