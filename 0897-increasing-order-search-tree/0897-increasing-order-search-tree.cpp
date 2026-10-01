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

    void inorder(TreeNode* root , vector<TreeNode*> &arr) { //pass by reference not by value otherwise for every recursive call a new arr will be made

        if(root == nullptr) return  ;

        inorder(root -> left , arr) ;
        arr.push_back(root) ;
        inorder(root -> right , arr) ;

    }

    TreeNode* increasingBST(TreeNode* root) {
         
        vector<TreeNode*> aux ;
        inorder(root , aux) ;

        TreeNode* ans = aux[0] ;

        for(int i = 0;i < aux.size()-1 ;i++ ) {
            aux[i] -> left = nullptr ;
            aux[i] -> right = aux[i+1] ;
        }

        aux.back() -> left = nullptr ;
        aux.back() -> right = nullptr ;
        return ans ;
    }
};