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
    void solve(TreeNode* root,TreeNode*& tail){
        if(!root) return;
        solve(root->left,tail);
        root->left=NULL;
        tail->right=root;
        tail=root;
        solve(root->right,tail);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode dummy(0);
        TreeNode* tail= &dummy;
        solve(root,tail);
        return dummy.right;
    }
};