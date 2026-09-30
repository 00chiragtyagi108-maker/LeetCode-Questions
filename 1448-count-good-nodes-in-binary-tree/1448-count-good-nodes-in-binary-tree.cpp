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

        int count = 0 ;

        if( root -> val >= maxi ){
            maxi = root ->val ;
            count++ ;
        }   
        
        return count + isGood(root -> left , maxi) + isGood(root -> right , maxi); ;
    }



    int goodNodes(TreeNode* root) {
        
        int ans = isGood(root , root -> val ) ;
        return ans ;
    }
};