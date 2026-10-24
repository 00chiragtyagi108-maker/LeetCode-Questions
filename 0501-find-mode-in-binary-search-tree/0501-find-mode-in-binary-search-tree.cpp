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
    
    void inorderTraversal(TreeNode* root , unordered_map<int , int>& mp) {
       
        if(root == nullptr) return ;

        inorderTraversal(root -> left , mp) ;
        mp[root -> val]++ ;
        inorderTraversal(root -> right , mp) ;

    }

    vector<int> findMode(TreeNode* root) {
        
        unordered_map<int , int> mp ;
        inorderTraversal(root , mp) ;

        vector<pair<int , int>> temp(mp.begin() , mp.end()) ;

        //Ahora Apply custom sort 
        sort(temp.begin() , temp.end() , [](auto a , auto b) {
            return a.second > b.second ;
        }) ;

        vector<int>mode ;
        int count = 1 ;

        for(int i = 1 ; i < temp.size() ; i++ ){
            if(temp[i].second == temp[0].second) {
                    count++ ;
            }
            else{
                break ;
            }
        }

        for(int j = 0 ; j < count ; j++ ) {
            mode.push_back(temp[j].first) ;
        }
        return mode ;
    }
};