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
    bool univalue(TreeNode* r,int value){
        if(r == nullptr){
            return true; 
        }
        
        if(r -> val == value && univalue(r -> right, value) && univalue(r -> left, value)){
            return true;
        }else{
            return false;
        }
    }
    
    bool isUnivalTree(TreeNode* root) {
        return univalue(root, root -> val);
    }
};