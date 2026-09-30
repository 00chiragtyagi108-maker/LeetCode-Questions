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
    
    int isGood(TreeNode* root , int maxi) {
        
        if(root == nullptr) return 0 ;

        int good = root -> val >= maxi  ;
        maxi = max(maxi , root -> val ) ;
        
        return good + isGood(root -> left , maxi) + isGood(root -> right , maxi); ;
    }



    int goodNodes(TreeNode* root) {
        
        return isGood(root , root -> val ) ;

    }
};