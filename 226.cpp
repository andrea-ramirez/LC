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
    void invert(TreeNode* r){
        if(r != nullptr){
            invert(r -> left);
            TreeNode* temp = r -> right;
            r -> right = r -> left;
            r -> left = temp;
            invert(r -> left);
        }

    }
    
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};