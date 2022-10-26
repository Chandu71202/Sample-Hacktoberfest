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
    int max(int a,int b)
    {
        if(a>b)
            return a;
        else
            return b;
    }
    int height(TreeNode* root)
    {
        int h;
        if(root==NULL)
            return -1;
        int lh=height(root->left);
        int rh=height(root->right);
        if(lh>rh)
            h=1+lh;
        else
            h=1+rh;
        return h;
        
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        int ld=diameterOfBinaryTree(root->left);
        int rd=diameterOfBinaryTree(root->right);
        int lh=height(root->left);
        int rh=height(root->right);
        int ans=max(lh+rh+2,max(ld,rd));
        return ans;
    }
};
