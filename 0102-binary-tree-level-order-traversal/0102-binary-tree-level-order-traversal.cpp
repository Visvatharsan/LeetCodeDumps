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
    void LOT(TreeNode* root, int level, vector<vector<int>>& arr){
        if(!root){
            return;
        }

        if(arr.size() <= level){
            arr.push_back({});
        }

        arr[level].push_back(root->val);
        LOT(root->left, level+1, arr);
        LOT(root->right, level+1, arr);

    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> arr;
        LOT(root,0,arr);
        return arr;
    }
};