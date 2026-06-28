/*
Problem: Serialize and Deserialize Binary Tree
LeetCode: 297

Time Complexity:
Serialize   : O(n)
Deserialize : O(n)

Space Complexity: O(n)
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

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {

        if(root == nullptr)
            return "";

        string ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {

            TreeNode* node = q.front();
            q.pop();

            if(node == nullptr) {
                ans += "#,";
                continue;
            }

            ans += to_string(node->val) + ",";
            q.push(node->left);
            q.push(node->right);
        }

        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {

        if(data.empty())
            return nullptr;

        stringstream ss(data);
        string str;

        getline(ss, str, ',');
        TreeNode* root = new TreeNode(stoi(str));

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {

            TreeNode* node = q.front();
            q.pop();

            // Left Child
            getline(ss, str, ',');
            if(str != "#") {
                node->left = new TreeNode(stoi(str));
                q.push(node->left);
            }

            // Right Child
            getline(ss, str, ',');
            if(str != "#") {
                node->right = new TreeNode(stoi(str));
                q.push(node->right);
            }
        }

        return root;
    }
};

/**
 * Your Codec object will be instantiated and called as such:
 * Codec ser, deser;
 * TreeNode* ans = deser.deserialize(ser.serialize(root));
 */
