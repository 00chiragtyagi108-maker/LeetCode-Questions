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

    TreeNode* makeTree(vector<int> &arr , int low , int high ){
        
        if(low > high)
            return nullptr ;
        
        int mid = ( low + high ) / 2 ;

        TreeNode* root = new TreeNode(arr[mid]) ;

        root -> left = makeTree(arr , low , mid - 1) ;

        root -> right = makeTree(arr , mid + 1 , high ) ;

        return root ;
    
    }


    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n = nums.size() ;

        int left = 0 ;
        int right = n - 1 ;

        return makeTree(nums , left , right) ;
    }
};