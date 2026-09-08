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

    void recursion(TreeNode* root , vector<int> & arr , int level){

        if(root == nullptr) return;

        if(level == arr.size()) {
            arr.push_back(root -> val ) ;
        }

        recursion(root -> right , arr , level + 1) ;
        recursion( root -> left , arr , level + 1 ) ;
    }
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> result;

        recursion(root , result , 0 ) ;
        return result ;

    }
};