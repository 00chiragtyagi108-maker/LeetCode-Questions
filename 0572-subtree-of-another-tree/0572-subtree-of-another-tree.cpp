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

    bool isSame(TreeNode* root1 , TreeNode* root2 ) {
        
        if(root1 == nullptr && root2 == nullptr)
            return true ;
        
        if(root1 == nullptr || root2 == nullptr)
            return false ;

        if(root1 -> val != root2 -> val) return false ;

        return isSame(root1 -> left , root2 -> left ) && isSame(root1 -> right , root2 -> right) ;
    }

    TreeNode* findNode(TreeNode* root , TreeNode* node ) {

        if( root == nullptr) return NULL ;

        if( root -> val == node -> val ){
            if(isSame(root , node)) 
                return root ;
        }
        TreeNode* left = findNode(root -> left , node ) ;

        if(left != nullptr) return left ;
        
        return findNode(root -> right , node ) ;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        TreeNode* ansNode = findNode( root , subRoot ) ;

        if(ansNode == nullptr) return false ;

        return isSame( ansNode , subRoot ) ;
    }
};