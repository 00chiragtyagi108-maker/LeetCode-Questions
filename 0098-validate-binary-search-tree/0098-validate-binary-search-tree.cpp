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

    bool isGood(TreeNode* root , long long low , long long high ){
        
        if(root == nullptr) return true ;

        if( root -> val <= low || root -> val >= high ) return false ;

        return (isGood(root -> left , low , root -> val) && isGood(root -> right , root -> val ,high)) ;

    }

    bool isValidBST(TreeNode* root) {

        return isGood(root , LLONG_MIN , LLONG_MAX ) ;

    }
};