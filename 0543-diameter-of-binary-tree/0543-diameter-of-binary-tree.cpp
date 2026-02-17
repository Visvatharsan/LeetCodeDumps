class Solution {
public:
    int res=0;
    int dfs(TreeNode* node){
        if(!node) return 0;
        int l=dfs(node->left);
        int r=dfs(node->right);
        res=max(res,l+r);
        return 1+max(l,r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return res;
    }
};