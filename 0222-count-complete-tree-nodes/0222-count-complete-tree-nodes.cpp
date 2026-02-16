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

    int cleft(TreeNode* root){
        int count=0;
        while(root){
            count++;
            root=root->left;
        }
        return count;
    }

    int cright(TreeNode* root){
        int count=0;
        while(root){
            count++;
            root=root->right;
        }
        return count;
    }

    int countNodes(TreeNode* root) {
        if(!root){
            return 0;
        }

        int lheight=cleft(root);
        int rheight=cright(root);

        if(lheight == rheight){
            return (pow(2,lheight))-1;
        }

        return 1+countNodes(root->left)+countNodes(root->right);
    }
};