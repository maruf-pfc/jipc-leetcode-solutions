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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root == nullptr)return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            int levelSize = q.size();
            TreeNode* rightNode;
            for(int i = 0; i < levelSize; i++) {
                TreeNode* curr = q.front();
                q.pop();

                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);

                if(i == levelSize-1)rightNode = curr;
            }
            ans.push_back(rightNode->val);
        }

        return ans;
    }
};
