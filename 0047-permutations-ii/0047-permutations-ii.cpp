class Solution {
public:

    void permutation(vector<int>& nums , vector<int> & temp , set<vector<int>>& st , vector<int>& vis ) {

        if(temp.size() == nums.size()) {
            st.insert(temp) ;
            return ;
        }

        for(int i = 0 ; i < nums.size() ; i++ ) {
            if(!vis[i]) {
                vis[i] = 1 ;
                temp.push_back(nums[i]) ;
                    
                permutation(nums ,temp , st , vis ) ;
                temp.pop_back() ;        
                vis[i] = 0 ;
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        set<vector<int>> st ;
        vector<int> aux ;
        vector<int> visited(nums.size() , 0 ) ;

        permutation(nums ,aux , st , visited ) ;

        vector<vector<int>>ans (st.begin() , st.end() ) ;

        return ans ;
    }
};