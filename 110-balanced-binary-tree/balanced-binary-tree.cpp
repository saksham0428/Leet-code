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
    int height(TreeNode* root){
        if(root==nullptr) return 0;
        int left=height(root->left);
        int right=height(root->right);
        int ans=max(left,right)+1;
        return ans;
        
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;

        bool lh=isBalanced(root->left);
        bool rh=isBalanced(root->right);
        bool diff=abs(height(root->left) - height(root->right)) <=1;
        if(lh && rh && diff) return true;
        return false;
    }
};