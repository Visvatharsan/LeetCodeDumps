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
    void BFS(TreeNode* root, int level, vector<vector<int>>& marr){
        if(!root)return;

        if(marr.size()<=level){
            marr.push_back({});
        }

        marr[level].push_back(root->val);
        BFS(root->left,level+1,marr);
        BFS(root->right,level+1,marr);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> marr;
        BFS(root,0,marr);
        vector<int> ans;
        for(int i=0; i<marr.size(); i++){
            int n=marr[i].size();
            ans.push_back(marr[i][n-1]);
        }
        return ans;
    }
};