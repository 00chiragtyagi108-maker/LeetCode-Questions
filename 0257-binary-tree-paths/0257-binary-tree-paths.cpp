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

    bool isLeaf(TreeNode* root) {
        return (root->left == NULL && root->right == NULL) ;
    }

    void helper(TreeNode* root , string curr , vector<string>& aux ) {
        
        curr += to_string(root -> val) ;
        if(isLeaf(root)) {
            aux.push_back(curr) ;
            return ;
        }

        if(root -> left) {
            helper(root -> left , curr + "->" , aux) ;
        }

        if (root -> right) {
            helper(root -> right , curr + "->" , aux) ;
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
     
        if(root == nullptr ) return {} ;
        vector<string> ans ;
        string curr ;

        helper(root , curr ,ans) ;
        return ans ; 
    }
};