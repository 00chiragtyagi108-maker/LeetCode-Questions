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

    
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr) return {} ;

        vector<int> ans ;

        vector<int> left = inorderTraversal(root -> left) ;
        ans.push_back(root -> val) ;
        vector<int> right = inorderTraversal(root -> right) ;

        left.insert(left.end(),ans.begin() , ans.end());
        left.insert(left.end(),right.begin() , right.end());

        return left ;
    }


    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int> ans1 = inorderTraversal(root1) ;
        int n1 = ans1.size() ;

        vector<int> ans2 = inorderTraversal(root2) ;
        int n2 = ans2.size() ;

        int i = 0;int j = 0;

        vector<int> result ;

        while(i < n1 && j < n2){
            if(ans1[i] >= ans2[j]){
                result.push_back(ans2[j]) ;
                j++ ;
            }
            else{
                result.push_back(ans1[i]) ;
                i++ ;
            }
        }
        while(i < n1 ){
            result.push_back(ans1[i]) ;
            i++ ;
        }

        while(j < n2 ){
            result.push_back(ans2[j]) ;
            j++ ;
        }

        return result ;
    }
};