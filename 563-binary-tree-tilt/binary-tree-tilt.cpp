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
    int tilt=0;
    int findSum(TreeNode* root) {
        if(root==NULL) return 0;
        int left=findSum(root->left);
        int right=findSum(root->right);
        tilt += abs(left-right);
        return left+right+root->val;
    }
    int findTilt(TreeNode* root){
        findSum(root);
        return tilt;
    }
};