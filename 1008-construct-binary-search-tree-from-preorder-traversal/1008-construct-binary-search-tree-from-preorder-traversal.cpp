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

    TreeNode* insertBST(TreeNode* root , int num) {
        if(root == nullptr)
            return new TreeNode(num) ;

        if(num < root -> val) {
            root -> left = insertBST(root -> left , num) ;
        }
        
        else {
            root -> right = insertBST(root -> right , num) ;
        }
        return root ;
    }

    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        TreeNode* root = nullptr ;
        
        for(int i = 0 ; i < preorder.size() ; i++) {
            root = insertBST(root , preorder[i]) ;
        }
        return root ;
    }
};