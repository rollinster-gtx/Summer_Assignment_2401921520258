/*
Problem: Lowest Common Ancestor of a BST
LeetCode: 235

Time Complexity: O(h)
Space Complexity: O(1)
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root,
                                   TreeNode* p,
                                   TreeNode* q) {

        while(root) {

            if(p->val < root->val &&
               q->val < root->val) {

                root = root->left;
            }

            else if(p->val > root->val &&
                    q->val > root->val) {

                root = root->right;
            }

            else {
                return root;
            }
        }

        return nullptr;
    }
};
