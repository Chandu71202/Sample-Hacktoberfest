# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root):
        def dfs(node):
            if not node:
                return
            dfs(node.left)
            in_order.append(node.val)
            dfs(node.right)
        
        in_order = []
        dfs(root)
        return in_order
        
