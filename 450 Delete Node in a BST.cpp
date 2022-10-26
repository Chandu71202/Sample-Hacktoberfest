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
        TreeNode* deleteNode(TreeNode* root, int key) 
        {
            if(root==NULL)
            return root;
            if(key<root->val)
            {
                root->left=deleteNode(root->left,key);
            }
            else if(key>root->val)
            {
                root->right=deleteNode(root->right,key);
            }
            else
            {
                if(root->left==NULL and root->right==NULL)
                return NULL;
                else if(root->left==NULL)
                {
                    return root->right;
                }
                else if(root->right==NULL)
                {
                    return root->left;
                }
                // if (!root->left || !root->right)
                //     return root->left ? root->left : root->right; 
                struct TreeNode* temp=root->right;
                while(temp->left != NULL) temp = temp->left;
                root->val=temp->val;
                root->right=deleteNode(root->right,temp->val);
            }
            return root;
        }
    };
