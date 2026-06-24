/*
Problem: Search in a Binary Search Tree
LeetCode: 700

Time Complexity: O(h)
Space Complexity: O(1)

h = height of tree
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {

        while(root != nullptr) {

            if(root->val == val)
                return root;

            else if(val < root->val)
                root = root->left;

            else
                root = root->right;
        }

        return nullptr;
    }
};
