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

    
    void flatten(TreeNode* root) {
        
        if(root == NULL) return ;

        TreeNode* temp = root ;

        TreeNode* rightTraverse = root -> right ;

        if(temp -> left){

            flatten(temp -> left) ;

            temp -> right = temp -> left ;
          
            temp -> left = nullptr ;

            TreeNode* aux = temp ;
            
            if(aux != nullptr) {
                while( aux -> right != nullptr)   
                    aux = aux ->right ;
            }

            aux -> right = rightTraverse ;
        
        }
      
        flatten(rightTraverse) ;
    }
};