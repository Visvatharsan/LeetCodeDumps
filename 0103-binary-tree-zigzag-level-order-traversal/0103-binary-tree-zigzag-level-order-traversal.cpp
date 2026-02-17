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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)return{};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        bool from_left_to_right=true;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> row(n,0);
            for(int i=0; i<n; i++){
                TreeNode* node=q.front();
                q.pop();
                int k=from_left_to_right?i:n-i-1;
                row[k]=node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            from_left_to_right=!from_left_to_right;
            res.push_back(row);
        }
        return res;
    }
};