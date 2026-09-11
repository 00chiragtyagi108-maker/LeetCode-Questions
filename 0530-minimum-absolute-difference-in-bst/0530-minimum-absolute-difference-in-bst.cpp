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

    void inorder(TreeNode* root , vector<int> &v){

        if(root == nullptr) return ;

        inorder(root -> left , v);
        v.push_back(root -> val) ;
        inorder(root -> right , v) ;
    }
    int getMinimumDifference(TreeNode* root) {
        
        vector<int> aux ;

        inorder(root , aux) ;

        
        int n = aux.size() ;
        int mini = INT_MAX ;

        for(int i = 1;i < n ;i++){
            mini = min(mini, aux[i] - aux[i - 1]);
        }
        return mini ;
    }
};