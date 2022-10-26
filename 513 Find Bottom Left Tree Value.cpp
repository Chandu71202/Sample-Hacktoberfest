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
    int height(TreeNode* root)
    {
        if(root==NULL)
            return -1;
        int h;
        int lh=height(root->left);
        int rh=height(root->right);
        if(lh>rh)
            h=1+lh;
        else
            h=1+rh;
        return h;
    }
    int findBottomLeftValue(TreeNode* root) 
    {
        int lh=height(root->left);
        int rh=height(root->right);
        if(rh==-1 && lh==-1)
            return root->val;
        if(rh>lh)
            return findBottomLeftValue(root->right);
        else
            return findBottomLeftValue(root->left);
    }
};
